// Object: VisualEnvironmentReferenceObjectData
// ClassId: 3965
// RuntimeId: 7225
// TypeInfo: 0x0000000144EC0BC0
#include "../Entity/LogicReferenceObjectData.h"
#include "../Global/Int32.h"
#include "../Global/Boolean.h"

#pragma pack(push, 16)
namespace WorldSim {
    class VisualEnvironmentReferenceObjectData : public Entity::LogicReferenceObjectData {
        Int32 Priority; // 0xC0
        Boolean OverrideVisibility; // 0xC4
        Boolean OwnedByLightingContextPad; // 0xC5
        char pad_0xC6[0xA];
    }; // 0xD0
    static_assert(sizeof(VisualEnvironmentReferenceObjectData) == 0xD0);
}
#pragma pack(pop)