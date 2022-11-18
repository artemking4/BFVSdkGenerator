// Object: PrivateGamesModesInfoEntityData
// ClassId: 3043
// RuntimeId: 3845
// TypeInfo: 0x0000000144D656F0
#include "../Entity/EntityData.h"
#include "../Global/CString.h"
#include "../CasablancaShared/PrivateGamesBlueprint.h"
#include "../Global/Int32.h"

#pragma pack(push, 8)
namespace CasablancaShared {
    class PrivateGamesModesInfoEntityData : public Entity::EntityData {
        CString Sid; // 0x20
        CasablancaShared::PrivateGamesBlueprint Blueprint; // 0x28
        Int32 GameSizeFilter; // 0x30
        char pad_0x34[0x4];
    }; // 0x38
    static_assert(sizeof(PrivateGamesModesInfoEntityData) == 0x38);
}
#pragma pack(pop)