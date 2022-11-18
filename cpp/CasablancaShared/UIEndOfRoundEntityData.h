// Object: UIEndOfRoundEntityData
// ClassId: 3702
// RuntimeId: 26449
// TypeInfo: 0x0000000144D2A0A0
#include "../Entity/EntityData.h"
#include "../Global/Float32.h"

#pragma pack(push, 8)
namespace CasablancaShared {
    class UIEndOfRoundEntityData : public Entity::EntityData {
        Float32 EorTime; // 0x20
        char pad_0x24[0x4];
    }; // 0x28
    static_assert(sizeof(UIEndOfRoundEntityData) == 0x28);
}
#pragma pack(pop)