# Keyfilter Search Application in C
A C project on the basics of programming in the first year of high school. The program is actually a remake of the gps search from the car. It's a search based on letters from a subfile where the cities of streets are stored, or whatever. This was the main focus of the program but it can be used in any way
 
## Usage
The program is run in the following form: (./keyfilter denotes the location and name of the file):

./keyfilter ADDRESS<br/>
If the program is run without arguments, it takes the specified address as an empty string.

## Project description
The goal of the project is to create a program that emulates the algorithm for calculating the enable and disable keys on a virtual keyboard navigation. The input to the program is data of known addresses and a user-supplied string. The output of the program will contain the characters to be enabled on the keyboard.

## Possible Outputs
### 1. Address found
Found. <br/>
This output is printed if a single address S is found in the address database whose prefix matches the user-specified address ADDRESS. (Note: the prefix P of an S string is a string where the S string starts with the P string).

### 2. The address requires the specification of
Enable: CHARS <br/>
If multiple addresses matching a given ADDRESS prefix are found in the address database, the program prints a list of enabled CHARS keys using this formatted line. CHARS is an alphabetically ordered list of characters for which, for each character C, there is an address in the address database whose prefix matches the ADDRESS string associated with that character C.

### 3. Address not found
Not found<br/>
If there is no address in the address database whose prefix matches the specified ADDRESS string, the program prints this message.

## Examples of inputs and outputs
### Auxiliary address file: <br/>
$ cat addresses.txt <br/>
Prague <br/>
Brno <br/>
Bruntal <br/>
Bratislava <br/>

### Example of searching for the word brno
$ ./keyfilter <addresses.txt <br/>
Enable: BP <br/>
$ ./keyfilter b <addresses.txt <br/>
Enable: R <br/>
$ ./keyfilter br <addresses.txt <br/>
Enable: ANU <br/>
$ ./keyfilter brn <addresses.txt <br/>
Found. <br/>
$ ./keyfilter be <addresses.txt <br/>
Not found <br/>
