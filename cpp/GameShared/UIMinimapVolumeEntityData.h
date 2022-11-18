// Object: UIMinimapVolumeEntityData
// ClassId: 3734
// RuntimeId: 47638
// TypeInfo: 0x0000000144E778C0
#include "../Entity/EntityData.h"
#include "../Core/Asset.h"
#include "../Global/Boolean.h"

#pragma pack(push, 8)
namespace GameShared {
    class UIMinimapVolumeEntityData : public Entity::EntityData {
        Core::Asset Asset; // 0x20
        Boolean IsDefault; // 0x28
        char pad_0x29[0x7];
    }; // 0x30
    static_assert(sizeof(UIMinimapVolumeEntityData) == 0x30);
}
#pragma pack(pop)