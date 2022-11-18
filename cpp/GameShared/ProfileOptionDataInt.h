// Object: ProfileOptionDataInt
// ClassId: 672
// RuntimeId: 24695
// TypeInfo: 0x0000000144E754C0
#include "../GameShared/ProfileOptionData.h"
#include "../Global/Int32.h"

#pragma pack(push, 8)
namespace GameShared {
    class ProfileOptionDataInt : public GameShared::ProfileOptionData {
        Int32 Min; // 0x30
        Int32 Max; // 0x34
        Int32 Value; // 0x38
        Int32 Step; // 0x3C
    }; // 0x40
    static_assert(sizeof(ProfileOptionDataInt) == 0x40);
}
#pragma pack(pop)