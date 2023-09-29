#include "BitcoinExchange.hpp"

int parser(int argc, char **argv)
{
	try{
		if (argc != 2)
			throw std::runtime_error
				("Error\nExpected input: ./program file.txt");
		std::fstream txtdata(argv[1]);
		std::fstream csvdata("data.csv");
		if (!txtdata || !csvdata)
			throw std::runtime_error("Error\nCsv or text data missing.");
		txtdata.close(); csvdata.close();
	}
	catch(const std::exception &e)
	{
		std::cerr << e.what() << std::endl;
		return (-1);
	}
		return (0);
}

int main(int argc, char **argv)
{
	if (parser(argc, argv) < 0)
		return (0);
	BitcoinExchange btc(argv[1]);

	btc.print_data();
}
