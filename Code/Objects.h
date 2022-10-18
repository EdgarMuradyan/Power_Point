#ifndef OBJECTS_HPP
#define OBJECTS_HPP


//interfaceb for objects
namespace Object {
	
	class IObject
	{
		IObject() = default;
	public:
		virtual void AddObject() = 0;
		virtual void moveObject() = 0;
		virtual void removeObject() = 0;

	};



	class Line
	{
		Line() = default;
	private:
		double startX;
		double startY;
		double endX;
		double endY;
	};

	class Circuit
	{
		Circuit() = default;
	private:
		double radius;
		double centerX;
		double cebterY;
	};

	class Squer
	{
		Squer() = default;
	private:
		double size;
		double centerX;
		double centerY;
	};

	class Tringel
	{
		
		Tringel() = default;
	private:
		double x_1;
		double y_1;
		double x_2;
		double x_2;
		double x_3;
		double x_3;

	};


}








#endif //!OBJECTS_HPP
