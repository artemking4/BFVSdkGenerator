// Object: AmbientDataEntityData
// ClassId: 2045
// RuntimeId: 43330
// TypeInfo: 0x0000000144BDF6E0
#include "../Entity/EntityData.h"
#include "../AmbienceShared/AmbientDataAsset.h"

#pragma pack(push, 8)
namespace AmbienceShared {
    class AmbientDataEntityData : public Entity::EntityData {
        AmbienceShared::AmbientDataAsset Asset; // 0x20
    }; // 0x28
    static_assert(sizeof(AmbientDataEntityData) == 0x28);
}
#pragma pack(pop)