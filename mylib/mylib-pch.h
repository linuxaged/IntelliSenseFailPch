#define DECLARE_SINGLETON(className) \
public: \
	static className* GetInstance(); \

#define IMPLEMENT_SINGLETON(className) \
className* className::GetInstance() \
{ \
	static className instance; \
	return &instance; \
}