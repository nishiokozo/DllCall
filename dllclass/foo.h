struct Prim
{
	virtual void a() = 0;
	virtual void Delete() = 0;
};

struct Foo:Prim
{
	Foo();
	~Foo();

	void Delete();

	void a();
};

