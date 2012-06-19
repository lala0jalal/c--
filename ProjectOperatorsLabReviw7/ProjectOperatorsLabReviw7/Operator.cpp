/*#include<iostream>
#include<string>


using namespace std;


string course_no = "MIS 101";		//line 1
double max_enrl;
					//line 1

*/
struct courseTypeS
{
	string course_no;
	string course_name;
	int credits;
	int max_enrl;
};


courseTypeS course4;    //Declaring course4 of type courseTypeS
//struct of undeclared namespace


namespace CourseN
{
	string course_no = "CS 155";         //Line 3
	int x =32;                           //Line 4
	void DoBilling_Tution();


	struct courseTypeS                   //This is a struct declaration in standard c++
	{
		string course_no;                //Line 5
		string course_name;
		int credits;
		int max_enrl;
	};


	class CourseTypeC                    //This is a class declaration in standard c++
	{
		   public:
		string course_no;                //Line 6
		string course_name;
		int credits;
		int max_enrl;
	};
}


CourseN::courseTypeS  course1;     // Declaring course1 of type courseTypeS struct of courseN namespace
CourseN::courseTypeS  *ptrcourse1; // Declaring pointer of ptrcourse1 of type courseTypeS struct of courseN namespace
CourseN::CourseTypeC   course2;     // Declaring course2 of type courseTypeC class of courseN namespace


int main()
{
		int x = 56;                           //Line 9
		string course_no = "MIS 651";         //Line 10
		struct courseTypeS                    //This is a struct declaration in c++
		{
			string course_no;
			string course_name;
			int credits;
			int max_enrl;
		};


		courseTypeS course3;     //Declaring course3 of type courseTypeS struct of main method
		CourseN::courseTypeS  *ptrcourse1;
		ptrcourse1 = &course1;

		cout << "\nTo refer to the variable course_no in line 1:"
		     << ::course_no;   //::scope resolution operator
		cout << "\nTo refer to the variable course_no in line 3:"
			 <<  CourseN::course_no ;
		cout << "\nTo refer to the variable x in line 4:"
			 << CourseN::x ;
		cout << "\nTo refer to the variable course-no in line 10:"
			 << course_no;


		cout <<"\n\nOutput values of object course1 of type courseTypeS struct of courseN namespace\n";


		course1.course_no = "MIS Struct";
		cout << "Course Code: " << course1.course_no << "\n";


		cout << "\nOutput values of object of type courseTypeS referenced by pointer ptrcourse1\n";


		ptrcourse1->course_no = "MIS POINTER";   //the same as (*ptrcourse1).course_no = "MIS POINTER";


		cout << " Course Code: "<< ptrcourse1->course_no << "\n\n";


		cout << "\nOutPut values of object course2 of type courseTypeC class of courseN namespace\n";


		course2.course_no = "MIS CLASS";
		cout << "Course Code: " << course2.course_no << "\n\n";


		cout << "\nOutput values of object course3 of type courseTypeC class declared in the main\n";


		course3.course_no = "MIS CLASSMAIN";
		cout << "Course Code: " << course3.course_no <<"\n\n";


		cout << "\nOutput values of object course4 of type courseTypeS classin the undeclard namespace\n";


		course4.course_no = "MIS UNDECLARD NAMESPACE";
		cout << "Course Code: " << course4.course_no << "\n\n";


		system("pause");
		return 0;


} 