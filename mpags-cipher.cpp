#include <iostream>
#include <string>
#include <cmath>
#include <vector>

int main(int argc, char* argv[])
{
    //int a;
    //double b = 1.2;
    //double c{3.4};

    //a = 43;
    //b = 2.2;
    //c = a * b * a;
    // Read and print three
    // Floating point numbers
    //std::cout << c << std::endl;

    //std::string msg {"Hello"};

    //std::cout << msg << "\n";

    //std::string msg2 {"I give up"};

    //std::cout << msg2 << "\n";

    //int a2{5};
    //a2 = 10;

    //const int b2{5};

    //const double a3{2.2};
    //std::cout << a3 << "\n";

    //int new_integer{6};
    //new_integer = 66;
    //std::cout << new_integer << "\n";

    //std::string new_string{"Liverpool FC till I die"};
    //std::cout << new_string << "\n";
    
    //std::cout << msg[3] << std::endl;

    //int a_scope{43};
    //int b_scope{21};

    //{
    //    int a_scope{12};
    //    int c_scope{88};

    //    std::cout << c_scope << std::endl;
    //}
    //std::cout << a_scope << std::endl;
    
    //std::cout << "For loop coming up:" << std::endl;
    //for (int i(0); i < 10; ++i)
    //{
    
    //    std::cout << "i = " << i << std::endl;
    //}

    //int i2(0);
    //std::cout << "While loop coming up: " << "\n";
    //while (i2 < 10)
    //{
    //    ++i2;
    //    std::cout << "i2 = " << i2 << std::endl;
    //}
    
    // Using functions
    //std::cout << "sqrt(9) = " << sqrt(9) << std::endl;

    // Exercise 5, transliterate user input

    
    char in_char('x');
    std::string out_str("");
    std::string out_str_number("");

    std::cout << "Type in letters or numbers, then press Ctrl D when you want to exit the cipher programme and want to see rest of programme: " << std::endl;
    // Take each letter from user input and in each case:
    while (std::cin >> in_char)
    {
        // Convert to upper case
        if (std::isalpha(in_char))
        {
            out_str += std::toupper(in_char);
            std::cout << out_str << std::endl;
            continue;
        }
        switch (in_char)
        {
            case '1':
                out_str_number = "ONE";
                out_str += out_str_number;
                std::cout << out_str << std::endl;

                break;
            case '2':
                out_str_number = "TWO";
                out_str += out_str_number;
                std::cout << out_str << std::endl;
                break;
            case '3':
                out_str_number = "THREE";
                out_str += out_str_number;
                std::cout << out_str << std::endl;
                break;
            case '4':
                out_str_number = "FOUR";
                out_str += out_str_number;
                std::cout << out_str << std::endl;
                break;
            case '5':
                out_str_number = "FIVE";
                out_str += out_str_number;
                std::cout << out_str << std::endl;
                break;
            case '6':
                out_str_number = "SIX";
                out_str += out_str_number;
                std::cout << out_str << std::endl;
                break;
            case '7':
                out_str_number = "SEVEN";
                out_str += out_str_number;
                std::cout << out_str << std::endl;
                break;
            case '8':
                out_str_number = "EIGHT";
                out_str += out_str_number;
                std::cout << out_str << std::endl;
                break;
            case '9':
                out_str_number = "NINE";
                out_str += out_str_number;
                std::cout << out_str << std::endl;
                break;
            case '0':
                out_str_number = "ZERO";
                out_str += out_str_number;
                std::cout << out_str << std::endl;
                break;
            default:
                // Do nothing
                break;
        }

    }

    std::cout << "FINAL: " << out_str << std::endl;

    

    const std::vector<std::string> cmdLineArgs { argv, argv+argc };

    // std::vector Example 1; Manipulation

    std::vector<double> vec = {1.2, 3.4, 5.6};

    std::cout << "Vector size: " << vec.size() << std::endl;

    vec.push_back(7.8);
    vec.push_back(9.1);

    std::cout << "Vector size with two appended elements: " << vec.size() << std::endl;

    vec.pop_back();

    std::cout << "Length with final element removed: " << vec.size() << std::endl;

    for (size_t i{0}; i < vec.size(); i++)
    { 
        std::cout << "Index: " << i << " " << vec[i] << std::endl;
    }


    for (int i=0;i<argc; i++)
    {
        std::cout<<cmdLineArgs[i]<< std::endl;

        if(std::string(argv[i]) == "-h" || std::string(argv[i]) == "--help")
        {
            std::cout << "Help here: ... "<< std::endl;
        }
        else if(std::string(argv[i]) == "--version")
        {
            std::cout << "Version: ..." << std::endl;
        }
        else if(std::string(argv[i]) == "-i")
        {
            std::string input_file = argv[i+1];
            std::cout << "Input file: " << input_file << std::endl;
            i = i+1;
        }
        else if(std::string(argv[i]) == "-o")
        {
            std::string output_file = argv[i+1];
            std::cout << "Output file: " << output_file << std::endl;
            i = i+1;
        }
    }
    return 0;
}