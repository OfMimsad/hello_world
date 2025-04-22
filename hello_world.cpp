
#include <algorithm>
#include <iostream>
#include <ranges>
#include <string>
#include <vector>
#include "hello_world.h"
//#include "std_lib_facilities.h"
using namespace std;

//int main()
//{
//    string name1 = "";
//    double age = 0;
//    cout << "Please enter you name and age: \n";
//    std::cin >> name1;
//    cin >> age;
//    cout << "Your name is: " << name1 << "and you are "<< age * 12<< " months old";
//     
//}

//int main() // simple program to exercise operators
//{
//	cout << "Please enter a interger−-point value: ";
//	int n = 0;
//	cin >> n;
//	cout << "n == " << n
//		<< "\nn+1 == " << n + 1
//		<< "\nthree times n == " << 3 * n
//		<< "\ntwice n == " << n + n
//		<< "\nn squared == " << n * n
//		<< "\nhalf of n == " << n / 2
//		<< "\nsquare root of n == " << sqrt(n)
//		<< "\nremider of n by 2 is " << n % 2;
//}
//int main()
//{
//	
//	string previous; // previous word; initialized to ""
//	string current; // current word
//	while (cin >> current) { // read a stream of words
//		int rep = 0;
//		if (previous == current) // check if the word is the same as last
//			cout << "\nrepeated word:" << current << '\n';
//		cout << "\nCURR: " << current;
//		cout << "\nPRE: " << previous;
//		previous = current;
//	}
//}
//



//int main()
//{
//	int number_of_words = 0;
//	string previous; // previous word; initialized to ""
//	string current;
//	while (cin >> current) {
//		++number_of_words; // increase word count
//		if (previous == current)
//			cout << "word number " << number_of_words << " repeated: " << current << '\n';
//		previous = current;
//	}
//}

//int main()
//{
//	string s = "Goodbye, cruel world! ";
//	cout << s << '\n';
//}

//int main()
//{
//	//double d = 0;
//	//while (cin >> d)
//	//{ // repeat the statements below as long as we type in numbers
//	//	int i = d; // try to squeeze a floating-point value into an integer value
//	//	char c = i; // try to squeeze an integer into a char
//	//	cout << "d==" << d // the original double
//	//		<< " i==" << i // double converted to int
//	//		<< " c==" << c // int value of char
//	//		<< " char(" << c << ")\n"; // the char
//	//}

//}

//int main()
//{
//	cout << "Enter the name of the person you want to write to\n";
//	string first_name; // first_name is a variable of type string
//	cin >> first_name; // read characters into first_name
//	cout << "Dear, " << first_name << "!\n" << "How are you doing?\n";
//	cin >> first_name;
//	cout << "Have you seen " << first_name << " recently?!\n";
//	int age = 0; 
//	cin >> age;
//	cout << "I heard you have turned\n" << age << "\n";
//	if (age == 0 || age >= 110) cout << "Wow that is very impressive\n";
//	else if (age <= 12) cout << "Next year you will be " << age + 1 << "\n";
//	else if (age >= 17) cout << "Next year you will be able to vote.\n";
//	else if (age >= 70) cout << "Have you retired yet? \n";
//
//	cout << "Yours sincerely            " << "MohammadReza";
//	
//}


//#include <iomanip>
//int main()
//{
//    double d = 4294967296 / 2 - 1; // 2^32 = 4294967296, 2^32/2 = 2^31 = 2147483648
//    //double d = 2147483648-1; // 2^32 = 4294967296, 2^32/2 = 2^31 = 2147483648
//
//    int i = d;     // implicit safe conversion
//    double dd = i;
//
//    if (d == dd)
//        std::cout << "Safe conversion: d == dd, with d == " << std::fixed << d << "; i == " << i << "\n";
//    else
//        std::cout << "Unsafe conversion: d == " << std::fixed << d << "; dd == " << std::fixed << dd << "; i == " << i << "\n";
//}


//int main() // Programm to convert Miles to Kilomiters
//{
//	double miles = 0;
//	cout << "Please enter Miles to converet to Kilometers: \n";
//	cin >> miles;
//	cout << "Converting please be patient!\n";
//	cout << miles << " miles is: " << miles * 1.609 << " kilometers";
//}

//
//int main()
//{
//	double val1 = 0, val2 = 0;
//	cout << "Please enter two doubles for our calculation. \n";
//	cin >> val1 >> val2;
//	if (val1 < val2) cout << val1 << " is smaller\n";else cout << val2 << " is smaller\n";
//	if (val1 > val2) cout << val1 << " is bigger\n"; else cout << val2 << " is bigger\n";
//	cout << "the sum of the two integers is: " << val1 + val2 << "\n";
//	cout << "the difference between the two number is: " << val1 - val2 << "\n";
//	cout << "the product of the two integers is: " << val1 * val2 << "\n";
//	double ratio = 0;
//	if (val1 < val2) 
//	{	
//		ratio = val1 / val2;
//		cout << "the ratio between the two number is: " << ratio << "\n";
//	} 
//	else 
//	{
//		ratio = val2 / val1;
//		cout << "the ratio between the two number is: " << ratio << "\n"; 
//	}
//
//
//	cout << "*************************************************************************\n";
//
//
//	int  val1 = 0, val2 = 0;
//	cout << "Please enter two integers for our calculation. \n";
//	cin >> val1 >> val2;
//	if (val1 < val2) cout << val1 << " is smaller\n";else cout << val2 << " is smaller\n";
//	if (val1 > val2) cout << val1 << " is bigger\n"; else cout << val2 << " is bigger\n";
//	cout << "the sum of the two integers is: " << val1 + val2 << "\n";
//	cout << "the difference between the two number is: " << val1 - val2 << "\n";
//	cout << "the product of the two integers is: " << val1 * val2 << "\n";
//	double ratio = 0;
//	if (val1 < val2)
//	{
//		ratio = val1 / val2;
//		cout << "the ratio between the two number is: " << ratio << "\n";
//	}
//	else
//	{
//		ratio = val2 / val1;
//		cout << "the ratio between the two number is: " << ratio << "\n";
//	}
//	
//
//}

//int square(int x);
//int main()
//{
//	//int val1 = 01, val2 = 02, val3 = 03;
//	//cout << "Enter 3 integers: \n";
//	//cin >> val1 >> val2 >> val3;
//
//	//if (val1 == val2 == val3) { cout << val1 << ", " << val2 << ", " << val3; }
//	//else if (val1 == val2) { cout << val1 << ", " << val2 << ", " << val3;}
//	//else if (val1 == val3 )  { cout << val1 << ", " << val3 << ", " << val2;}
//	//else if ( val2 == val3) { cout << val2 << ", " << val3 << ", " << val1; }
//	//else { cout << val1 << ", " << val2 << ", " << val3; }
//
////	string  val1, val2, val3;
////	cout << "Enter 3 Strings: \n";
////	cin >> val1 >> val2 >> val3;
////
////	if (val1 == val2 && val1 == val3 && val2 == val3 ) { cout << val1 << ", " << val2 << ", " << val3; }
////	else if (val1 == val2) { cout << val1 << ", " << val2 << ", " << val3; }
////	else if (val1 == val3) { cout << val1 << ", " << val3 << ", " << val2; }
////	else if (val2 == val3) { cout << val2 << ", " << val3 << ", " << val1; }
////	else { cout << val1 << ", " << val2 << ", " << val3; }
////
//
//	/*int user_input1 = 00;
//	cout << "Please enter a number to determine wheather it is even or odd: \n";
//	cin >> user_input1;
//
//		int reminder_of = user_input1 % 2;
//		if(reminder_of == 0)
//		{
//			cout << "The number " << user_input1 << " is a even number.\n";
//
//		}
//		else
//		{
//			cout << "The number " << user_input1 << " is a odd number.\n";
//
//		}
//	*/
//
//	//while(true)
//	//{
//	//	int user_input = 00;
//	//	cout << "Please enter a number that you would like to be spelled: ";
//	//	cin >> user_input;
//	//	switch (user_input)
//	//	{
//	//	case 0:
//	//		cout << "Zero\n";
//	//		break;
//	//	case 1:
//	//		cout << "One\n";
//	//		break;
//	//	case 2:
//	//		cout << "Two\n";
//	//		break;
//	//	case 3:
//	//		cout << "Three\n";
//	//		break;
//	//	case 4:
//	//		cout << "Four\n";
//	//		break;
//	//	default:
//	//		cout << "I don't know the number!! but I will learn it in future.\n";
//	//		break;
//	//	}
//
//	//}
//
//	//string operation = " ";
//	//double operand_no1 = 01, operant_no2 = 02;
//	//cout << "Please enter the two operand:\n";
//	//cin >> operand_no1 >> operant_no2;
//	//cout << "Please enter the operator: ";
//	//cin >> operation;
//	//
//	//if(operation == "+")
//	//{
//	//	cout << "The sum is: " << operand_no1 + operant_no2;
//	//} else if(operation == "-")
//	//{
//	//	cout <<"The substraction is: " << operand_no1 - operant_no2;
//	//}
//	//else if (operation == "*")
//	//{
//	//	cout << "The multipilication is :" << operand_no1 * operant_no2;
//	//}
//	//else if (operation == "/")
//	//{
//	//	cout << "The division is: " << operand_no1 / operant_no2;
//	//}
//
//
//	//constexpr double cm_per_inch = 2.54; // number of centimeters in an inch
//	//double length = 1; // length in inches or centimeters
//	//char unit = ' ';
//	//cout << "Please enter a length followed by a unit (c or i):\n";
//	//cin >> length >> unit;
//	//if (unit == 'i')
//	//	cout << length << "in == " << length * cm_per_inch << "cm\n";
//	//else 
//	//	cout << length << "cm == " << length / cm_per_inch << "in\n";
//
///*	double toman_to_dollars = 100000;
//	double pound_to_dollards = 1.30;
//	double euro_to_dollars = 1.09;
//	string currency_sign;
//	double user_inputed = 00;
//
//	cout << "Please enter the amount you want to convert to US-Dollars(followed by the your own currency T/t for toman, E/e for euro and P/p for pound): \n";
//	cin >> user_inputed >> currency_sign;
//
//	if (currency_sign == "t" || currency_sign == "T") { cout <<  user_inputed << " toman equals " << user_inputed * toman_to_dollars << " dollars."; }
//	else if (currency_sign == "p" || currency_sign == "P") { cout <<  user_inputed << " pound equals " << user_inputed * pound_to_dollards << " dollars."; }
//	else if (currency_sign == "e" || currency_sign == "E") { cout <<  user_inputed << " euros equals " << user_inputed * euro_to_dollars << " dollars."; }
//	///*else { cout << "This system can not convert that currency to Dollars!"; }*/
//	//double toman_to_dollars = 100000;
//	//double pound_to_dollards = 1.30;
//	//double euro_to_dollars = 1.09;
//	//char currency_sign;
//	//double user_inputed = 00;
//
//	//cout << "Please enter the amount you want to convert to US-Dollars(followed by the your own currency T/t for toman, E/e for euro and P/p for pound): \n";
//	//cin >> user_inputed >> currency_sign;
//
//	//switch (currency_sign)
//	//{
//	//case 'T' : case 't' :  cout << user_inputed << " toman equals " << user_inputed * toman_to_dollars << " dollars."; 
//	//	break;
//	//case 'P' : case 'p' : cout << user_inputed << " pound equals " << user_inputed * pound_to_dollards << " dollars.";
//	//	break;
//	//case 'E' : case 'e' :  cout << user_inputed << " euros equals " << user_inputed * euro_to_dollars << " dollars.";
//	//	break;
//
//	//default:
//	//	cout << "This system can not convert that currency to Dollars!";
//	//	break;
//	//}*/
//
//
//
//
//	//int i = 0;
//	//while(i <=100)
//	//{
//	//	int ite = 0;
//	//	cout << char('a' + ite)<<"\n";
//	//	i++;
//	//}
//
//	/*char i = 'a';
//	while(i <= 'z')
//	{
//		cout << i << "\t" << i - 0 << "\n"; // MINUS 0 is the way to conver Char To Int
//		++i;
//	}*/
//	//	char I = 'A';
//	//for (char i = 'a'; i <= 'z'; i++)
//	//{
//	//	cout << I << "\t" << I - 0 << "\n";
//	//	cout << i << "\t" << i - 0 << "\n";
//	//	I++;
//	//	
//	//}
//	//for (char I = 'A'; I <= 'Z'; I++)
//	//{
//	//	cout << I << "\t" << I - 0 << "\n";
//	//}
//	int user_in = 00;
//	//cin >> user_in;
//	//int results = square(user_in);
//	//cout << "suared is: " << results;
//	//
//	//
//	//}
//	//int square(int x)
//	//{
//	//	int result = 0;
//	//
//	//	// Add x to the result x times
//	//	for (int i = 0; i < x; ++i)
//	//	{
//	//		result += x;
//	//	}
//	//
//	//	return result;
//	//}
//
//	//int sqvureds(int x)
//	//{
//	//	int results = 00;
//	//	for (int i = 0; i <= x; i++)
//	//	{
//	//		results = +x;
//	//	}
//	//	return results;
//	//}
//
//
//}






//int main()
//		// simple dictionary: list of sorted words
//	{
//		vector<string> words;
//		for (string temp; cin >> temp;) // read whitespace-separated words
//			words.push_back(temp); // put into vector
//		cout << "Number of words:" << words.size() << '\n';
//		ranges::sort(words); // sort the words
//		for (int i = 0; i < words.size(); ++i)
//			if (i == 0 || words[i−1] != words[i]) // is this a new word?
//				cout << words[i] << "\n";
//	}


//int main()
//{
//
//	string words_I_dont_like00 = "qw";
//	string words_I_dont_like01 = "we";
//	string words_I_dont_like02 = "er";
//	string words_I_dont_like03 = "re";
//
//	string user_input = "";
//
//	cout << "Please enter a word: \n";
//	while (true)
//	{
//		cin >> user_input;
//		if (user_input == words_I_dont_like00 || user_input == words_I_dont_like01 || user_input == words_I_dont_like02 || user_input == words_I_dont_like03)
//		{
//			cout << "Bleep\n";
//		}
//		else
//		{
//			cout << user_input << "\n";
//		}
//	}
//}
	//for (string inputed_word; cin >> inputed_word;)
	//{
	//	for (int i = 0; i <= diss_liked_words.size(); ++i)
	//	{
	//		if (inputed_word == diss_liked_words[i])
	//		{
	//			cout << "BLEEP\n";
	//		}
	//		else if(inputed_word != diss_liked_words[i])
	//		{
	//			cout << inputed_word << "\n";
	//		}
	//	}
	////}


//int main()
//{
//	//double  input_no1 = 00, input_no2 = 01;
//	//string termination_and_variable;
//
//	//while (termination_and_variable != "|")
//	//{
//	//	cin >> input_no1;
//	//	if (input_no1 > input_no2)
//	//	{
//	//		cout << "The smaller value is: " << input_no2 << "\n";
//	//		cout << "The larger value is: " << input_no1 << "\n";
//	//		if(input_no1 - input_no2 <= 1 || input_no2 - input_no1 <= 1)
//	//		{
//	//			cout << "The numbers are almost the same\n";
//	//		}
//
//	//	} else if (input_no1 < input_no2)
//	//	{
//	//		cout << "The smaller value is: " << input_no1 << "\n";
//	//		cout << "The larger value is: " << input_no2 << "\n";
//	//		if (input_no1 - input_no2 <= 1 || input_no2 - input_no1 <= 1)
//	//		{
//	//			cout << "The numbers are almost the same\n";
//	//		}
//	//	} else if (input_no1 == input_no2)
//	//	{
//	//		cout << "the numbers are equal\n";
//	//	}
//
//	//	
//	//}
//
//}

//const vector<string> legal_units = { "cm", "m", "in", "ft" };
//constexpr double cm_to_m{ 0.01 };
//constexpr double in_to_m{ 2.54 * cm_to_m };
//constexpr double ft_to_m{ 12.0 * in_to_m };
//
//bool legal_unit_checker(string i_unit)
//{
//	bool check_unit = false;
//	for(string loop_unit : legal_units)
//	{
//		if(loop_unit == i_unit)
//		{
//			check_unit = true;
//		}
//	}
//	return check_unit;
//}
//
//void print_legal_units()
//{
//	cout << "cm for centimeters\n"
//		<< "tm for meters\n"
//		<< "in for inches\n"
//		<< "ft for feet\n";
//}
//
//double convert_to_meter(double val, string unit)
//{
//	if(unit == "cm")
//	{
//		return val * cm_to_m;
//	} 
//	else if(unit == "in")
//	{
//		return val * in_to_m;
//	}
//	else if(unit == "ft")
//	{
//		return val * ft_to_m;
//	} 
//	else
//	{
//		return val;
//	}
//}
//
//
//
//int main()
//{
//	
//	double input_user = 00;
//	double val_to_meter = 00;
//	double smallest = 00, largest = 00;
//	bool first_Input = true;
//	bool conditon_of_loop = true;
//	string units;
//
//	double sum_of_all = 0;
//	vector<double> all_values;
//	
//	bool test = true;
//
//	cout << "Please enter a value with its unit: \n";
//	print_legal_units();
//
//
//
//		while (true)
//		{
//			if (cin >> input_user >> units)
//			{
//				test = true;
//			}
//			else
//			{
//				test = false;
//			}
//		
//			if(test)
//			{
//				if (legal_unit_checker(units))
//				{
//					val_to_meter = convert_to_meter(input_user, units);
//					sum_of_all += val_to_meter;
//					all_values.push_back(val_to_meter);
//					if (units == "m")
//					{
//						cout << input_user << units << "\n";
//					}
//					else if (units != "m")
//					{
//						cout << val_to_meter << "m" << "\n";
//					}
//
//					if (first_Input == true)
//					{
//						smallest = input_user;
//						largest = input_user;
//						cout << "The smallest and the largest so far are: " << smallest << "  " << largest << "\n";
//						first_Input = false;
//					}
//
//
//					if (input_user < smallest)
//					{
//						smallest = val_to_meter;
//						cout << "The smallest so far is: " << smallest << "m\n";
//			
//					}
//					else if (input_user > largest)
//					{
//						largest = val_to_meter;
//						cout << "The largest so far is: " << largest << "m\n";
//				
//					}
//
//				}
//				else
//				{
//					cout << "Not a valid unit please enter a valid one from below: \n";
//					print_legal_units();
//				}
//
//			}
//			else
//			{
//				cout << "The sum of values: " << sum_of_all << "\n";
//				cout << "The largest value: " << largest << "\n";
//				cout << "THe smallest: " << smallest << "\n";
//				sort(all_values);
//				for(auto val : all_values)
//				{
//					cout << "All the values that have been typed: " << val << "m\n";
//				}
//				break;
//			}
//
//		}
// 
//}
	
//int main()
//{
//	vector<int> test = { 1,2,3,4,5,6,7,8,9,10 };
//	int sizeoftest = 0;
//	for (auto i : test)
//	{
//		sizeoftest++;
//	}
//	cout << sizeoftest;
//
//	return 0;
//}



//int main()
//{
//	double distance_input = 0;
//	vector<double> distances_vector;
//	double sum_of_distance = 0;
//	bool size_of_vector = true;
//
//
//		while(cin >> distance_input)
//		{
//			distances_vector.push_back(distance_input);
//			for (double i = 1 ; i < distances_vector.size(); ++i)
//			{
//				if (distances_vector[i] < distances_vector[i - 1])
//				{
//					cout << "The shortes smallest is: " << distances_vector[i] << "\nThe larger distance is: " << distances_vector[i - 1] << "\n";
//				}
//				else if (distances_vector[i] > distances_vector[i - 1])
//				{
//					cout << "The shortes smallest is: " << distances_vector[i - 1] << "\nThe larger distance is: " << distances_vector[i] << "\n";
//				}
//			}
//			for (auto i : distances_vector)
//			{
//				sum_of_distance += i;
//			}
//			cout << "Sum of distances is: " << sum_of_distance << "\n";
//		}
//			
//	
//}


//int main() //Guessing game
//{
//	vector<int> numbers;
//	vector<int> first_low_split;
//	vector<int> second_low_split;
//	vector<int> third_low_split;
//	vector<int> fourth_low_split;
//	vector<int> fifth_low_split;
//	
//	//*************************************
//
//	vector<int> first_high_split;
//	vector<int> second_high_split;
//
//	string user_quess_input = "";
//
//
//	for (int i = 1; i <= 100; i++)
//	{
//		numbers.push_back(i);
//	}
//	
//
//	cout << "Is the number you are thinking of less than 50 ?\n";
//	cin >> user_quess_input;
//	if(user_quess_input == "yes")
//	{
//		first_low_split = { numbers.begin(), numbers.begin() + 49 };	
//		cout << "Is the number you are thinking of less than 25 ?\n";
//		user_quess_input = "";
//		cin >> user_quess_input;
//		if (user_quess_input == "yes")
//		{
//			second_low_split = { first_low_split.begin(), first_low_split.begin() + 24 };
//			cout << "Is the number you are thinking of less than 12 ?\n";
//			user_quess_input = "";
//			cin >> user_quess_input;
//			if (user_quess_input == "yes")
//			{
//				third_low_split = { second_low_split.begin(), second_low_split.begin() + 11 };
//				cout << "Is the number you are thinking of less than 6 ?\n";
//				user_quess_input = "";
//				cin >> user_quess_input;
//				if (user_quess_input == "yes")
//				{
//					fourth_low_split = { third_low_split.begin(), third_low_split.begin() + 5 };
//
//					cout << "Is the number you are thinking of less than 3 ?\n";
//					user_quess_input = "";
//					cin >> user_quess_input;
//					if (user_quess_input == "yes")
//					{
//						fifth_low_split = { fourth_low_split.begin(), fourth_low_split.begin() + 2 };
//						cout << "is 2 your number ?\n";
//						user_quess_input = "";
//						cin >> user_quess_input;
//						if (user_quess_input == "yes")
//						{
//							cout << "You picked number 2\n";
//						} else
//						{
//							cout << "You picked number 1\n";
//						}
//					}
//					else if(user_quess_input == "no")
//					{
//						cout << "is 4 your number ?\n";
//						user_quess_input = "";
//						cin >> user_quess_input;
//						if (user_quess_input == "yes")
//						{
//							cout << "You picked number 4\n";
//						}
//						else
//						{
//							cout << "You picked number 5\n";
//						}
//					}
//				}
//			}
//			else if(user_quess_input == "no")
//			{
//				
//			}
//		}
//	}
//	
//}




// Number guessing game
//int main()
//{
//    int number{ 50 };
//
//    // define upper and lower bounds
//    int upper{ 100 };
//    int lower{ 1 };
//    int range{ upper - lower };
//    int half{ range / 2 };
//
//    char answer{ '\0' };
//    int question{ 0 };
//
//    cout << "Think of a number between " << lower << " and " << upper << "\n\n";
//    while (lower != upper)
//    {
//
//        range = upper - lower;
//        if (range == 1 && number < half)
//        {
//            number = upper;
//        }
//        else if (range == 1 && number > half)
//        {
//            number = upper;
//        }
//        else
//            number = lower + range / 2;
//
//        //cout << "upper: " << upper << " lower: " << lower << " range: " << range << '\n';
//
//        cout << question + 1 << ". Is the number you are thinking of less than " << number << "? (Enter 'y' or 'n') \n";
//
//        cin >> answer;
//        if ('y' == answer)
//        {
//            upper = number - 1;
//            question++;
//
//        }
//        else if ('n' == answer)
//        {
//            lower = number;
//            question++;
//
//        }
//        else
//        {
//            cout << "Please enter 'y' or 'n' ...\n";
//        }
//
//        //cout << "upper: " << upper << " lower: " << lower << " range: " << range << '\n';
//
//    }
//
//
//    cout << "The number you are thinking of is " << lower << "\n";
//    cout << "I needed " << question << " guesses.\n";
//
//    return 0;
//}


//using namespace std;
//int main()
//{
//	double num_1 = 0, num_2 = 0, calculation_results = 0;
//	char math_operator = 'as';
//
//	cout << "Please enter two numbers followed by the operator you want the computer to perform on them: \n";
//	
//	while(cin >> num_1 >> num_2 >> math_operator)
//	{
//		switch (math_operator)
//		{
//		case '+':
//			calculation_results = num_1 + num_2;
//			cout << "The sum of " << num_1 << " and " << num_2 << " is equal to " << calculation_results << "\n";
//			break;
//		case '-':
//			calculation_results = num_1 - num_2;
//			cout << "The minues of " << num_1 << " and " << num_2 << " is equal to " << calculation_results << "\n";
//			break;
//		case '*':
//			calculation_results = num_1 * num_2;
//			cout << "The multipilication of " << num_1 << " and " << num_2 << " is equal to " << calculation_results << "\n";
//			break;
//		case '/':
//			calculation_results = num_1 / num_2;
//			cout << "The divition of " << num_1 << " and " << num_2 << " is equal to " << calculation_results << "\n";
//			break;
//		default:
//			cout << "Please enter a valid operator!\n";
//			break;
//		}
//	
//	}
//
//}

//int main()
//{
//	const vector<string> spelled_numbers = {"zero", "one", "two", "three", "four", "five", "six", "seven", "eight", "nine", "ten"};
//	int num_input = 0;
//	string spelled_num;
//	cout << "Please enter a number between 0 and 10 and also a number in string like two or five: \n";
//	while(cin >> num_input >> spelled_num)
//	{
//		if(num_input <= 10)
//		{
//			for (int i = 0; i < spelled_numbers.size(); i++)
//			{
//				if (num_input == i)
//				{
//					cout << num_input << " is spelled " << spelled_numbers[i] << "\n";
//				}
//				if(spelled_num == spelled_numbers[i])
//				{
//					cout << "\n" << spelled_num << " is " << i;
//				}
//			}
//		} else
//		{
//			cout << "Please enter a number between 0 and 10, for example 6!\n";
//		}
//		
//	}
//}

//int turn_string_to_num(string num_input)
//{
//	const vector<string> spelled_numbers = { "zero", "one", "two", "three", "four", "five", "six", "seven", "eight", "nine", "ten"};
//	int result = 0;
//
//	if (find(spelled_numbers.begin(), spelled_numbers.end(), num_input) != spelled_numbers.end())
//	{
//		for (int i = 0; i < spelled_numbers.size(); i++)
//		{
//			if (num_input == spelled_numbers[i])
//			{
//				result = i;
//				return result;
//			}
//		}
//		result = stoi(num_input);
//		return result;
//	}
//	
//
//}
//
//void do_math(int num_1, int num_2, char math_operator)
//{
//	int calculation_results = 0;
//	switch (math_operator)
//	{
//	case '+':
//		calculation_results = num_1 + num_2;
//		cout << "The sum of " << num_1 << " and " << num_2 << " is equal to " << calculation_results << "\n";
//		break;
//	case '-':
//		calculation_results = num_1 - num_2;
//		cout << "The minues of " << num_1 << " and " << num_2 << " is equal to " << calculation_results << "\n";
//		break;
//	case '*':
//		calculation_results = num_1 * num_2;
//		cout << "The multipilication of " << num_1 << " and " << num_2 << " is equal to " << calculation_results << "\n";
//		break;
//	case '/':
//		calculation_results = num_1 / num_2;
//		cout << "The divition of " << num_1 << " and " << num_2 << " is equal to " << calculation_results << "\n";
//		break;
//	default:
//		cout << "Please enter a valid operator!\n";
//		break;
//	}
//}
//
//int main()
//{
//	int num1 = 0, num2 = 0;
//	char math_operator = '0';
//	string numbers_string_1, numbers_string_2;
//
//	cout << "Please enter two numbers followed by the operator you want the computer to perform on them: \n";
//
//	while (cin >> numbers_string_1 >> numbers_string_2 >> math_operator)
//	{
//
//		num1 = turn_string_to_num(numbers_string_1);
//		num2 = turn_string_to_num(numbers_string_2);
//		cout << num1 << "\t" << num2;
//		if (num1 <= 10 && num2 <= 10 && num1 >= 0 && num2 >= 0)
//		{
//			do_math(num1, num2, math_operator);
//		}
//		else { cout << "Please enter a single digit number!\n"; }
//
//	}

//}


//int main()
//{
//	string players_pick;
//	srand(time(0));
//	int random_pick = rand() % 3;
//	string pc_random_pic;
//	vector<string> game_objects = { "rock", "paper", "sissor" };
//	cout << "rock paper scissor, pick one!\n";
//	while(cin >> players_pick)
//	{
//		pc_random_pic = game_objects[random_pick];
//
//		if(players_pick == pc_random_pic)
//		{
//			cout << "DRAW! you and computer both picked " << players_pick << "\n";
//		} else if(players_pick != pc_random_pic && players_pick == "rock" && pc_random_pic == "sissor")
//		{
//			cout << "You Win! " << "you picked '" << players_pick << "' which beats computer's pick '" << pc_random_pic << "'\n";
//		}
//		else if (players_pick != pc_random_pic && players_pick == "sissor" && pc_random_pic == "paper")
//		{
//			cout << "You Win! " << "you picked '" << players_pick << "' which beats computer's pick '" << pc_random_pic << "'\n";
//		}
//		else if (players_pick != pc_random_pic && players_pick == "paper" && pc_random_pic == "rock")
//		{
//			cout << "You Win! " << "you picked '" << players_pick << "' which beats computer's pick '" << pc_random_pic << "'\n";
//		}
//		else if (players_pick != pc_random_pic && players_pick == "sissor" && pc_random_pic == "rock")
//		{
//			cout << "You Lost! " << "you picked '" << players_pick << "' which is beaten by computer's pick '" << pc_random_pic << "'\n";
//		}
//		else if (players_pick != pc_random_pic && players_pick == "paper" && pc_random_pic == "sissor")
//		{
//			cout << "You Lost! " << "you picked '" << players_pick << "' which is beaten by computer's pick '" << pc_random_pic << "'\n";
//		}
//		else if (players_pick != pc_random_pic && players_pick == "rock" && pc_random_pic == "paper")
//		{
//			cout << "You Lost! " << "you picked '" << players_pick << "' which is beaten by computer's pick '" << pc_random_pic << "'\n";
//		} else
//		{
//			cout << "Please pick form rock, paper and sissor in lowee case!!!\n";
//		}
//	}
//	
//}



//int checkPrime(int test)
//{
//
//	if (test % test == 0 && test % 1 == 0) 
//	{
//		if (test % 2 == 0 || test % 3 == 0 || test % 5 == 0 || test % 7 == 0)
//		{
//			cout << test << " is not a prime number!\n";
//		}
//		else 
//		{
//			cout << test << " is a prime number!\n";
//			return test;
//		}
//	}

//}

//int main()
//{
//	vector<int> numbers;
//	for (int i = 1; i < 100; i++)
//	{
//		numbers.push_back(i);
//	}
//	vector<int> primes = { 2, 3, 5, 7, 11, 13, 17, 19, 23, 29, 31, 37, 41, 43, 47, 53, 59, 61, 67, 71, 73, 79, 83, 89, 97 };
//	vector<int> checked_primes;
//	for (int i = 0; i < numbers.size(); i++)
//	{
//		if (numbers[i] > primes[i])
//		{
//			if (numbers[i] % primes[i] != 0)
//			{
//				checked_primes.push_back(numbers[i]);
//			}
//		}
//	}
//
//	for(auto p : checked_primes)
//	{
//		cout << p << "\n";
//	}
//
//}


//// Check if the number can be divided by a prime number smaller than itself
//bool IsPrime(int number, vector<int> primes)
//{
//    for (int prime : primes)
//    {
//        if (number < prime || number % prime == 0)
//            return false;
//    }
//    return true;
//}
//
//int main()
//{
//
//    vector<int> primes{ 2 };
//
//    for (int number = 1; number <= 100; ++number)
//    {
//        if (IsPrime(number, primes))
//        {
//            primes.push_back(number);
//        }
//    }
//
//    cout << "Found prime numbers between 1 and 100: \n";
//    for (int nPrime : primes)
//    {
//        cout << nPrime << " ";
//    }
//    cout << '\n';
//
//    return 0;
//}

//void SieveOfEratosthenes(int N)
//{
//    vector<bool> is_prime(N + 1, true);
//    is_prime[0] = is_prime[1] = false;
//
//    for (int p = 2; p * p <= N; ++p)
//    {
//        if (is_prime[p])
//        {
//            for (int i = p * p; i <= N; i += p)
//                is_prime[i] = false;
//        }
//    }
//
//    cout << "Prime numbers up to " << N << ": ";
//    for (int i = 2; i <= N; ++i)
//    {
//        if (is_prime[i])
//            cout << i << " ";
//    }
//    cout << '\n';
//}
//
//int main()
//{
//    SieveOfEratosthenes(30);
//    return 0;
//}




//int main()
//{
//	double distance_input = 0;
//	vector<double> distances_vector;
//	double sum_of_distance = 0;
//	bool size_of_vector = true;
//
//
//		while(cin >> distance_input)
//		{
//			distances_vector.push_back(distance_input);
//			for (double i = 1 ; i < distances_vector.size(); ++i)
//			{
//				if (distances_vector[i] < distances_vector[i - 1])
//				{
//					cout << "The shortes smallest is: " << distances_vector[i] << "\nThe larger distance is: " << distances_vector[i - 1] << "\n";
//				}
//				else if (distances_vector[i] > distances_vector[i - 1])
//				{
//					cout << "The shortes smallest is: " << distances_vector[i - 1] << "\nThe larger distance is: " << distances_vector[i] << "\n";
//				}
//			}
//	/*		for (auto i : distances_vector)
//			{
//				sum_of_distance += i;
//			}
//			cout << "Sum of distances is: " << sum_of_distance << "\n";*/
//		}
//			
//	
////}
//int main()
//{
//	int t = 0;
//	vector<int> vt;
//	int min_vt = 0;
//	int max_vt = 0;
//	int repeated = 0;
//	int repeated_number = 0;
//	int increment = 0;
//	while (cin >> t)
//	{
//		vt.push_back(t); // it creates and does this functionality each time when a new input is putted.
//		min_vt = vt[0];
//		max_vt = vt[0];
//		for (int i : vt)
//		{
//			if (i < min_vt)
//			{
//				min_vt = i;
//				
//			} else if (i > max_vt)
//			{
//				max_vt = i;
//			}
//		}
//		
//		repeated = vt[0];
//		for(int i = 0; i < vt.size(); i++)
//		{
//			if(repeated == vt[i])
//			{
//				repeated_number++;
//				repeated = vt[i];
//			}
//		}
//		
//;	}
//	cout << "Min \t" << min_vt << "\n";
//	cout << "Max \t" << max_vt << "\n";
//	cout << "Repeated \t" << repeated << "\n";

//	vector<int> naValues;
//	for (int nValue; cin >> nValue; )
//		naValues.push_back(nValue);
//   sort(naValues); // sort series
//
//    // compute mode of the entered series:
//    int nCount{ 1 };
//    int nMaxCount{ 1 };
//    int nMode{ 0 };
//    int nPrev{ naValues[0] };
//    for (int nIdx = 1; nIdx < naValues.size(); ++nIdx)
//    {
//        // update the number count if the previous value is the same as the current one.
//        if (nPrev == naValues[nIdx])
//        {
//            nCount++;
//        }
//        else
//        {
//            nCount = 1; // reset counter if the current value is different than the previous one.
//        }
//
//        // update the mode if necessary
//        if (nMaxCount < nCount)
//        {
//            nMode = naValues[nIdx];
//            nMaxCount = nCount;
//        }
//
//        nPrev = naValues[nIdx];
//    }
//
//    cout << "The mode of the series is " << nMode << " with " << nMaxCount << " appareances.\n";
//
//    return 0;
//}




//int main()
//{
//	double a = 1, b = 1, c = 1;
//	int x1 = 1, x2 = 1;
//	bool condition = false;
//	int delta = 0;
//	int detla_b_powerd = 0;
//	int delta_4_ac = 0;
//	int sorat_kasr1 = 0;
//	int sorat_kasr2 = 0;
//
//	cout << "Please enter values for variables a, b and c in order written: \n";
//	while(cin >> a >> b >> c)
//	{
//		detla_b_powerd = b * b;
//		delta_4_ac = 4 * a * c;
//		delta = detla_b_powerd - delta_4_ac;
//		
//		if(delta < 0)
//		{
//			cout << "Equation does not have an answer!\n";
//			break;
//		} else if(delta == 0)
//		{
//			sorat_kasr1 = -1 * b + sqrtf(delta);
//			x1 = sorat_kasr1 / 2 * a;
//			x2 = x1;
//			break;
//		} else if(delta > 0)
//		{
//			sorat_kasr1 = -1 * b + sqrtf(delta);
//			sorat_kasr2 = -1 * b - sqrtf(delta);
//			x1 = sorat_kasr1 / 2 * a;
//			x2 = sorat_kasr2 / 2 * a;
//			break;
//		}
//	}
//
//	cout << "The solutions are x1 = " << x1 << " and x2 = " << x2 << "\n";
//}

//void checkForName(string name, vector<string> names, vector<int> numbers)
//{
//	for(int i = 0; i < names.size(); i++)
//	{
//		if (names[i] == name)
//		{
//			cout << "The number for the name " << name << " is: " << numbers[i] << "\n";
//			return;
//		}
//	}
//	cout << "NAME NOT FOUND!\n";
//	return;
//}
//
//void findnyNumber(int number, vector<int> numbers, vector<string> names)
//{
//	for (int i = 0; i < names.size(); i++)
//	{
//		if (numbers[i] == number)
//		{
//			cout << "The name for the number " << number << " is: " << names[i] << "\n";
//			return;
//		}
//	}
//	cout << "NUMBER NOT FOUND!\n";
//	return;
//}
//
//int main()
//{
//	string name_inputed;
//	string second_inputed;
//	int find_by_score = 0;
//	int number_inputed = 1;
//	bool loop_condition = true;
//	bool condition_one = true;
//	bool can_put = false;
//	bool condition_two = false;
//	vector<string> names_vector;
//	vector<int> numbers_vector;
//	cout << "Plase enter your name and number (first name then number): \n";
//	while (cin >> name_inputed >> number_inputed)
//	{
//
//		if (number_inputed == 0 && name_inputed == "noName")
//		{
//			break;
//		}
//
//		if (condition_two == true)
//		{
//			for (string name : names_vector)
//			{
//				if (name_inputed == name)
//				{
//					cout << "Repeated name, Please enter a new name!! \n";
//					condition_one = false;
//					break;
//				}else
//				{
//					condition_one = true;
//				}
//			}
//			
//		}
//
//
//		if (condition_one == true)
//		{
//			names_vector.push_back(name_inputed);
//			numbers_vector.push_back(number_inputed);
//			condition_one = false;
//			condition_two = true;
//
//		}
//
//
//		cout << "Enter a name that you would like to find its number: \n";
//		cin >> second_inputed;
//		checkForName(second_inputed, names_vector, numbers_vector);
//
//		/*for (int i = 0; i < names_vector.size(); i++)
//		{
//			if (names_vector[i] == second_inputed)
//			{
//				cout << "The number for the name " << names_vector[i] << " is : " << numbers_vector[i] << "\n";
//				break;
//			}
//			else if (numbers_vector[i] != find_by_score)
//			{
//				cout << "Name not found!\n";
//			}
//		}*/
//		cout << "Enter a number that you would like to find its name: \n";
//		cin >> find_by_score;
//		findnyNumber(find_by_score, numbers_vector, names_vector);
//
//
//	/*	for(int j = 0; j < numbers_vector.size(); j++)
//		{
//			if(numbers_vector[j] == find_by_score)
//			{
//				cout << "The name for the number " << numbers_vector[j] << " is : " << names_vector[j] << "\n";
//				break;
//			}
//			else if(numbers_vector[j] != find_by_score)
//			{
//				cout << "number not found!\n";
//			}
//			
//		}*/
//
//
//
//		cout << "Plase enter your name and number (first name then number): \n";
//
//		for(int i = 0; i < names_vector.size(); i++)
//		{
//			cout << i + 1<< ". name and number is: " << names_vector[i] << " " << numbers_vector[i] << "\n";
//		}
//
//
//
//	}
//}

//int area(int a)
//{
//	return a * 2;
//}
//
//
//int s1 = area(7, 2; // error: ) missing
//int s2 = area(7, 2) // error: ; missing
//Int s3 = area(7, 2); // error: Int (with a capitalized ’i’) is not a type
//int s4 = area('7,2); // error: non-terminated character ’; terminating ’ is missing)




//int main()
//try
//{
//	// our program
//	int a[3] = { 1,2,3 };
//	cout << a[500000000];
//	return 0; // 0 indicates success
//} catch (exception & e)
// {
//cerr << "error: " << e.what() << '\n';
//return 1; // 1 indicates failure
//} catch (...)
// {
//cerr << "Oops: unknown exception!\n";
//return 2; // 2 indicates failure
//}


//int area(int length, int width)
//// the arguments are positive
//{
//	expect([&] { return 0 < length && 0 < width; }, "bad arguments to area()");
//	int a = length * width;
//	expect([&] { return 0 < a; }, "bad area() result");
//	return a;
////}
//int main(){
//	default_random_engine engine;
//	uniform_int_distribution<int> dist(1, 6); // the distribution we want
//	for (int i = 0; i < 10; ++i)
//		cout << dist(engine) << ' '; // get a value from the distribution using

int main()
try
{
	//cout << "Success!\n";
	//cout << "Success!\n";
	//cout << "Success" << "\n";
	//cout << "success" << "\n"
	//int res = 7; vector<int> v(10); v[5] = res; cout << "Success!\n";
	//int res = 7; vector<int> v(10); v[5] = res; cout << "Success!\n";
	//if (cout) cout << "Success!\n"; else cout << "Fail!\n";
	//bool c = true; if (c) cout << "Success!\n"; else cout << "Fail!\n";
	//string s = "ape"; bool c = "fool" ; if (c) cout << "Success!\n";
	//string s = "ape"; if (s == "ape") cout << "Success!\n";
	//string s = "ape"; if (!(s == "fool")) cout <<"Success!\n";
	//string s = "ape"; if (s != "fool") cout << "Success!\n";
	//vector<int> v(5);
	//for (int i = 0; i < v.size(); ++i) 
	//{ cout << "Success!\n";
	//}
	//vector<char> v(5); for (int i = 0; i < v.size(); ++i) { cout << "Success!\n"; }

	 //string s = "Success!\n"; for (int i = 0; i < 8; ++i) cout << s[i];
	 //if (true) cout << "Success!\n"; else cout << "Fail!\n";
	 //int x = 2000; int c = x+0; if (c == 2000) cout << "Success!\n";
	 //string s = "Success!\n"; for (int i = 0; i < 10; ++i) cout << s[i];
	 //vector<int> v(5); for (int i = 0; i < v.size(); ++i) cout << "Success!\n";
	//int i = 0; int j = 9; while (i < 10) { ++j;  if (j < i) cout << "Success!\n"; }
	 //int x = 1; double d = 5 / x; 
	 //if (d == x*5) cout << "Success!\n";
	 //string s = "Success!\n"; for (int i = 0; i < 10; ++i) cout << s[i];
	//int i = 2;int j = 0; while (i < 12) { ++j;++i; if (j < i) cout << "Success!\n"; }
	 int x = 4; double d = 5 / x-2;
	 //if (d = 2 * x + 0.5) cout << "Success!\n"; //If you wanted d to be (5 / 4) - 2 = 1.25 - 2 = -0.75, you'd need to ensure at least one operand in the division is a double: 	 double d = 5.0 / x - 2; 
	  //d = -0.75
	 cout <<"Success!\n";
}
 catch (exception & e)
 {
cerr << "error: " << e.what() << '\n';

return 1;
} catch (...)
 {
cerr << "Oops: unknown exception!\n";
return 2;
}