[(self) (true) (false) (thisContext) (super) (nil)] @keyword

(number) @number

(string) @string
(symbol) @string
(character) @string

(identifier) @variable
(block_argument) @variable

(unary_message (_) (unary_identifier) @variable.part)
(binary_operator) @variable.part
(keyword) @variable.part

["^" "[" "]" "{" "}"] @important

(keyword_selector (keyword) @major_declaration)
(binary_selector (binary_operator) @major_declaration)
(unary_selector (unary_identifier) @major_declaration)
