struct Time
{
	class Invalid{};
	Time(int h, int m);
	void add_time(int n);
	int mins(){ return m; };
	private:
		int h, m;
		bool is_valid();
};

