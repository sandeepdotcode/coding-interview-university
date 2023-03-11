#ifndef DYNAMIC_ARRAY_H
#define DYNAMIC_ARRAY_H

namespace mystl
{
	class dynamic_array
	{
		public:
			dynamic_array();					// constructor
			~dynamic_array();					// destructor
			int size();
			int capacity();
			bool is_empty();
		private:
			const int initial_capacity = 16;
			int *array = nullptr;
			int size_of_array = 0,
				curr_capacity = initial_capacity;
	};

	dynamic_array::dynamic_array()
	{
		array = new int[initial_capacity];
	}

	dynamic_array::~dynamic_array()
	{
		delete[] array;
	}

	int dynamic_array::size()
	{
		return size_of_array;
	}

	int dynamic_array::capacity()
	{
		return curr_capacity;
	}

	bool dynamic_array::is_empty()
	{
		return ( size_of_array == 0) ? true : false;
	}
}


		


#endif /* DYNAMIC_ARRAY_H */
