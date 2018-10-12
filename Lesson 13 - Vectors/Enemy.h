#pragma once
#include <iostream>

class Enemy {
public:
	Enemy(int hps);
	virtual ~Enemy();
	virtual int get_hit_points() const;
	virtual int get_score() const;
	virtual void set_hit_points(int new_hit_points);
	virtual	void set_score(int new_score);
	/** returns 1 if this class is greater than rhs , 0 if equal
	* and ( -1) if this class is less than rhs .
	*/
	virtual void Print();
	Enemy* bestFriend;
	void setFriendHealth(int value);
protected:
	int hit_points;
	int* score;
};

