module.exports = grammar({
  name: 'mckeeman',
  
  extras: $ => [],
  
  inline: $ => [$.rules, $.alternatives, $.alternative, $.items, $.item],

  rules: {
    // syntax
    grammar: $ => $.rules,

    rules: $ => repeat1($.rule),

    rule: $ => choice(
      seq($.name, $._lf),
      seq($.name, $._lf, $.alternatives)
    ),
    
    alternatives: $ => repeat1($.alternative),
    
    alternative: $ => choice(
      seq($._indentation, $.items, $._lf),
      seq($._indentation, $.nothing, $._lf),
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
    
    name: $ => /[_a-zA-Z]+/,
    
    _indentation: $ => / {4}/,
    
    singleton: $ => /'([\u{20}-\u{10FFFF}]|(10|[0-9A-F])?[0-9A-F]{4})'/u,
    
    string: $ => /"[\u{20}-\u{21}\u{23}-\u{10FFFF}]+"/u,
    
    nothing: $ => '""'
  }
});
