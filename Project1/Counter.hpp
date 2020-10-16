#pragma once


template <typename T>
class counter
{
public:
	counter(bool do_count = true) : counted(do_count)
	{
		if (counted) get_count()++;
	}
	~counter()
	{
		if (counted) get_count()--;
	}
	static unsigned long GetInstancesCount()
	{
		return get_count();
	}

private:
	bool counted;
	static unsigned long& get_count()
	{
		static unsigned long count = 0;
		return count;
	}
};