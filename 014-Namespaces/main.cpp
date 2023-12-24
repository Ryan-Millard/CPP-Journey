#include "../std_lib_facilities.h"

int f();

namespace Dart
{
	class Shoot {};
	class Hit {};
}
namespace TextLib
{
	class Text {};
	class Glyph {};
	class Line {};
}

int main()
{
	using namespace Dart;
	using std::string, TextLib::Text;

	Shoot s;
	Hit h;
	TextLib::Glyph x;
	string y = "yY";
	Text t;

	int num = f();
	cout<<"Allowed due to std being in scope (in f() ).\n";
}

int f()
{
	using namespace std;
	cout<<"Allowed due to std being in scope.\n";
	return 5;
}
