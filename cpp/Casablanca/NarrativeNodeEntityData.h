// Object: NarrativeNodeEntityData
// ClassId: 3416
// RuntimeId: 5036
// TypeInfo: 0x0000000144C835C0
#include "../Entity/SpatialEntityData.h"
#include "../Global/Int32.h"
#include "../GameShared/TeamId.h"
#include "../Global/Boolean.h"

#pragma pack(push, 16)
namespace Casablanca {
    class NarrativeNodeEntityData : public Entity::SpatialEntityData {
        Int32 NodeType; // 0x60
        GameShared::TeamId TeamId; // 0x64
        Int32 Seed; // 0x68
        Boolean Enabled; // 0x6C
        char pad_0x6D[0x3];
    }; // 0x70
    static_assert(sizeof(NarrativeNodeEntityData) == 0x70);
}
#pragma pack(pop)