#include <iostream>	// For input/Output
#include <string> // For using string
#include <cstdlib> // For system("cls")
#include <vector> // For dynamic array / Vector / List (if in python)
#include <cctype> // For string to Upper
/* Why don't go functional ?
I tried but because of myself still learning c++
it's just hard to keep all the variable managed
functionaly and im kinda bad at placing which one go to where
Then it came to this :v

(*)why don't just place it on Global variable
-well it's a practice for me not to put thing in
global

Forgive me for spagetty code :v
*/

int main()
{
	std::vector<std::string> Task;
	std::string Task_2{}; // Re init ?
	int pilihan{};
	int pilihan_hapus{};
	char enter{};
	while(true)
	{
	label:
		std::cout << "-------------------------------|-*TO DO LIST*-|---------------------------------\n";
		std::cout << "Silahkan Masukkan Task : ";
		std::getline(std::cin, Task_2);	// input Task
		Task.push_back(Task_2);	// Dimasukkan ke vector Task
		system("cls");


	label_2:
			system("cls");
			std::cout << "-------------------------------|-*TO DO LIST*-|---------------------------------\n";
			for (auto i = Task.begin(); i != Task.end() ; ++i) // Print yang ada di vector
			{

				std::cout << "*)" << ". " << *i << "\n";
			}

			std::cout << "\n\n";
			std::cout << "Ketik 1 untuk add task lagi\n";
			std::cout << "Ketik 2 untuk delete complete task\n";
			std::cout << "Ketik 3 untuk Keluar dari apps\n";
			std::cout << "Pilih berapa ? : ";
			std::cin >> pilihan;
			std::cin.get();

		if(pilihan == 1)
		{
			system("cls");
			goto label;
			 // Yes evil but i trying to make it functional and its more ugly than this.
		}

		else if(pilihan == 2)
		{
			std::cout << "Pilihan urutan ke berapa ? Yang pertama (0) : ";
			std::cin >> pilihan_hapus;
			std::cin.get();
			Task.erase(Task.begin() + pilihan_hapus);
			goto label_2;
		}

		else if(pilihan == 3)
		{
		system("cls");
		std::cout << "\n\nTerima kasih karena sudah mencoba pakai\n";
		std::cout << "Apps ngga jelas ini\n";
		std::cout << "Thank you very much for using this\n";
		std::cout << "Yes\n";
			break;
		/* Why don't use exit() cuz memory didnt cleaned by c++
		 Lead to memory coruption ? IDK still learning */
		}

		else
		{
			system("cls");
			std::cout << "Maaf anda salah ketik (y) untuk kembali ";
			std::cin >> enter;
			putchar(tolower(enter));
			if(enter == 'y') // from cctype/ctype.h
				goto label_2;
		}
	}
	return 0;
}
