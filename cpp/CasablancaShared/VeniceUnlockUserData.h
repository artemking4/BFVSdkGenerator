// Object: VeniceUnlockUserData
// ClassId: 455
// RuntimeId: 59456
// TypeInfo: 0x0000000144CFB750
#include "../GameShared/UnlockUserDataBase.h"
#include "../Global/Boolean.h"

#pragma pack(push, 8)
namespace CasablancaShared {
    class VeniceUnlockUserData : public GameShared::UnlockUserDataBase {
        Boolean CheckSquad; // 0x20
        char pad_0x21[0x7];
    }; // 0x28
    static_assert(sizeof(VeniceUnlockUserData) == 0x28);
}
#pragma pack(pop)