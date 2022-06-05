[(self) (true) (false) (thisContext) (super) (nil)] @keyword
(number) @number
(string) @string
(symbol) @string
(identifier) @variable
(unary_message (_) (unary_identifier) @variable.part)
(binary_operator) @variable.part
(keyword) @variable.part
["^" "[" "]" "{" "}"] @important
