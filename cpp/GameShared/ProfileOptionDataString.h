// Object: ProfileOptionDataString
// ClassId: 673
// RuntimeId: 13433
// TypeInfo: 0x0000000144E752C0
#include "../GameShared/ProfileOptionData.h"
#include "../Global/Int32.h"
#include "../Global/CString.h"

#pragma pack(push, 8)
namespace GameShared {
    class ProfileOptionDataString : public GameShared::ProfileOptionData {
        Int32 MaxLength; // 0x30
        char pad_0x34[0x4];
        CString Value; // 0x38
    }; // 0x40
    static_assert(sizeof(ProfileOptionDataString) == 0x40);
}
#pragma pack(pop)