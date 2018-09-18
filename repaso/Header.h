#ifndef _HEADER_H
#define _HEADER_H


template<class TEMP>
class Vec3 {
public:
	TEMP x, y, z;

	Vec3() {
		x = 0;
		y = 0;
		z = 0;
	};
	Vec3(TEMP x1,TEMP y,TEMP z1) {
		x = x1;
		this.y = y;
		z = z1;
	}
	Vec3(int ja) {
		x = ja * 12;
		y = ja * 29;
		z = ja * 11;
	};

	Vec3 operator + (Vec3 Q) {
		Vec3 r;
		r.x = x + Q.x;
		r.y = y + Q.y;
		r.z = z + Q.z;
		return(r);
	};

	Vec3 operator - (Vec3 Q) {
		Vec3 r;
		r.x = x - Q.x;
		r.y = y - Q.y;
		r.z = z - Q.z;
		return(r);
	};

	Vec3 operator +=(Vec3 v){
		x += v.x;
		y += v.y;
		z += v.z;

		return(this);
	};

	Vec3 operator -=(Vec3 v) {
		x -= v.x;
		y -= v.y;
		z -= v.z;
		return(this);
	};

	bool operator ==(Vec3 v)
	{
		return (x == v.x && y == v.y && z == v.z);
	};

	Vec3 operator =(Vec3 v) {
		x = v.x;
		y = v.y;
		z = v.z;
		return(this);
	};

	TEMP normalize(Vec3 v) {
		TEMP n;
		n = (sqrtf(float(x*x) + float(y*y) + float(z*z)));
		x = x / n;
		y = y / n;
		z = z / n;
		return(this);
	};

	bool IsZero() 
	{
		return (x == 0 && y == 0);
	};

	TEMP DistanceTo(Vec3 v)
	{
		TEMP fx = x - v.x;
		TEMP fy = y - v.y;
		TEMP fz = z - v.z;

		return (TEMP)sqrtf(float(fx*fx) + float(fy*fy) + float(fz*fz));
	};







	




};
#endif 
