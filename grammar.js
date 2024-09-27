module.exports = grammar({
  name: 'mckeeman',
  
  extras: $ => [$.comment],
  
  inline: $ => [$.rules, $.alternative, $.item],

  rules: {
    // syntax
    grammar: $ => $.rules,

    rules: $ => repeat1(choice(
      $.rule,
      /[ \t]*(\n|\r\n)/   // empty line
    )),

    rule: $ => choice(
      seq($.name, $._eol),
      seq($.name, $._eol, $.alternatives)
    ),
    
    alternatives: $ => repeat1($.alternative),
    
    alternative: $ => choice(
      seq($._indentation, $.items, $._eol),
      seq($._indentation, $.nothing, $._eol),
    ),
    
    items: $ => seq($.item, repeat(seq(' ', $.item))),
    
    item: $ => choice(
      $.literal,
      $.name
    ),
    
    literal: $ => choice(
      $.singleton,
      $.string,
      seq($.range, repeat($.exclude))
    ),
    
    range: $ => seq($.singleton, ' . ', $.singleton),
    
    exclude: $ => choice(
      seq(' - ', $.singleton),
      seq(' - ', $.range)
    ),

    // lexis
    
    _lf: $ => /\n|\r\n/,
    
    _eol: $ => /[ \t]*(\n|\r\n)/,  // end of line
    
    name: $ => /[_a-zA-Z]+/,
    
    _indentation: $ => / {4}/,
    
    singleton: $ => /'([\u{20}-\u{10FFFF}]|(10|[0-9A-F])?[0-9A-F]{4})'/u,
    
    string: $ => /"[\u{20}-\u{21}\u{23}-\u{10FFFF}]+"/u,
    
    nothing: $ => '""',
    
    comment: $ => /[ \t]*;[\u{20}-\u{10FFFF}]*/u
  }
});
