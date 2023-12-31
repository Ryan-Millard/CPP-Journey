class Date
{
		int y, m, d; // year, month, day
		bool is_valid();
	public:
		class Invalid{};
		Date(int y, int m, int d); // constructor: check for valid date and initialize
		void add_day(int n); // increase the Date by n days
		int month(){ return m; }; // increases performance if small function (inside class declaration)
};

