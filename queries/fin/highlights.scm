(ERROR) @error
(com) @comment
(sym) @variable
(num) @number @constant.numeric
(esc) @string @string.quoted.double
(esc_seq) @escape @constant.character.escape
(raw) @string @string.raw
["," "="] @punctuation.delimiter
["(" ")" "[" "]"] @punctuation.bracket

;; TODO
;; colons within symbols should highlight as @punctuation.delimiter
;; symbols that tag collections could highlight different?
;; symbols that are extensions could highlight different?
