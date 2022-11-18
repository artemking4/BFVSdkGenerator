// Object: SubWorldInclusionSettings
// ClassId: 4944
// RuntimeId: 24238
// TypeInfo: 0x0000000144EE6A50
#include "../Core/DataContainer.h"
#include "../Entity/SubWorldInclusionSetting.h"

#pragma pack(push, 8)
namespace Entity {
    class SubWorldInclusionSettings : public Core::DataContainer {
        Array<Entity::SubWorldInclusionSetting> Settings; // 0x18
    }; // 0x20
    static_assert(sizeof(SubWorldInclusionSettings) == 0x20);
}
#pragma pack(pop)