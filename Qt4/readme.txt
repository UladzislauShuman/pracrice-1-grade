format of .json file for my program:
----------------------------------------
[
	int,
	int,
	int,
	...
	int
]
----------------------------------------
array of int

also -- i could make smth like:
nlohmann::json example - is object
(that means example.is_object -- true)
and read from beginning to the first array with all "int" elements
but -- may be a little bit later
