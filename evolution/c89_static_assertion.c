#define STATIC_ASSERT(COND, MSG) \
typedef char static_assertion_##MSG[2*(!!(COND))-1]

int main(void)
{
    STATIC_ASSERT(sizeof(void *) == 4, must_be_32bit);
    return 0;
}
