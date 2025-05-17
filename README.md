# KeyFilter - Search Application in C

A C project on the basics of programming in the first year of high school. The program is actually a remake of the gps search from the car. It's a search based on letters from a subfile where the cities of streets are stored, or whatever. This was the main focus of the program but it can be used in any way

## Usage

The program runs in the following format:

```
./keyfilter [ADDRESS] <address_file.txt
```

Where:
- `./keyfilter` is the path and name of the executable file
- `[ADDRESS]` is an optional search string.
- `<address_file.txt` is the input file containing the list of addresses

> If the program is run without arguments, it takes the specified address as an empty string.

## Project Description

The goal of the project is to create a program that emulates the algorithm for calculating enabled and disabled keys on a virtual navigation keyboard. Based on a database of known addresses and a user-provided string, the program displays which keys should remain active for efficiently completing the search.

## Possible Outputs

### 1. Address Found
```
Found.
```
This output is printed if a single address S is found in the address database whose prefix matches the user-specified address ADDRESS. (Note: the prefix P of an S string is a string where the S string starts with the P string).

### 2. Address Requires Specification
```
Enable: CHARS
```
If multiple addresses matching a given ADDRESS prefix are found in the address database, the program prints a list of enabled CHARS keys using this formatted line. CHARS is an alphabetically ordered list of characters for which, for each character C, there is an address in the address database whose prefix matches the ADDRESS string associated with that character C.

### 3. Address Not Found
```
Not found
```
If there is no address in the address database whose prefix matches the specified ADDRESS string, the program prints this message.

## Usage Examples

### Sample address file:
```
$ cat addresses.txt
Prague
Brno
Bruntal
Bratislava
```

### Search examples:

**Empty search string:**
```
$ ./keyfilter <addresses.txt
Enable: BP
```

**Search starting with 'b':**
```
$ ./keyfilter b <addresses.txt
Enable: R
```

**Search for string 'br':**
```
$ ./keyfilter br <addresses.txt
Enable: ANU
```

**Search for string 'brn':**
```
$ ./keyfilter brn <addresses.txt
Found.
```

**Search for non-existent address:**
```
$ ./keyfilter be <addresses.txt
Not found
```

---

*Project created as part of programming fundamentals in the first year of college.*
