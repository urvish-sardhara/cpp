#include <iostream>

class Message 
{
	private:
    std::string internalMessage;

	public:
    Message(const std::string& message = " ") : internalMessage(message) {}

    void print() 
	{
        std::cout << internalMessage << std::endl;
    }

    void print(const std::string& additionalMessage)
	{
        std::cout << internalMessage << " " << additionalMessage << std::endl;
    }
};

int main() 
{
    Message message1("Hello");
    message1.print(); 	

    Message message2("Hi");
    message2.print("there!"); 

    return 0;
}

