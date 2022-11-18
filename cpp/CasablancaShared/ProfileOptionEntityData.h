// Object: ProfileOptionEntityData
// ClassId: 3047
// RuntimeId: 59773
// TypeInfo: 0x0000000144D4BB70
#include "../Entity/EntityData.h"
#include "../GameShared/ProfileOptionData.h"

#pragma pack(push, 8)
namespace CasablancaShared {
    class ProfileOptionEntityData : public Entity::EntityData {
        GameShared::ProfileOptionData ProfileOption; // 0x20
    }; // 0x28
    static_assert(sizeof(ProfileOptionEntityData) == 0x28);
}
#pragma pack(pop)