(ERROR) @error

(sym) @variable @attribute
(com) @comment
(esc) @string @string.quoted.double
(raw) @string @string.raw
(num) @number @constant.numeric

["," "="] @punctuation.delimiter
["(" ")" "[" "]"] @punctuation.bracket

;; extensions
((sym) @keyword
  (#match? @keyword "(^true$|^false$|^fin:)"))
