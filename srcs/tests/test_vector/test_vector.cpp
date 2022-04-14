#include <iostream>
#include <iomanip>

# define PRINT(x) std::cout << x

void 	test_constr_assign_operator();
void 	test_insert_one_element();
void 	test_insert_n_elements();
void 	test_insert_n_elements_iterator();
void 	test_erase_one_element();
void 	test_erase_n_elements();
void 	test_assign_n_elements();
void 	test_assign_n_elements_iterator();
void 	test_spec_operators();
void 	test_methods();


void	test_vector()
{
	PRINT(std::setw(74) << "\e[1;32m* * * * * * * * * * * * * * * * * * * * *\e[0m" << "\n");
	PRINT(std::setw(74) << "\e[1;32m*                                       *\e[0m" << "\n");
	PRINT(std::setw(96) << "\e[1;32m*\e[0m              \e[1;35mV E C T O R\e[0m              \e[1;32m*\e[0m" << "\n");
	PRINT(std::setw(74) << "\e[1;32m*                                       *\e[0m" << "\n");
	PRINT(std::setw(74) << "\e[1;32m* * * * * * * * * * * * * * * * * * * * *\e[0m" << "\n\n");

	test_constr_assign_operator();
	test_insert_one_element();
	test_insert_n_elements();
	test_insert_n_elements_iterator();

	test_erase_one_element();
	test_erase_n_elements();

	test_assign_n_elements();
	test_assign_n_elements_iterator();

	test_methods();

	test_spec_operators();
}