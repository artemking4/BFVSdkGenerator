// Object: SubWorldInclusionSetting
// ClassId: 4942
// RuntimeId: 26654
// TypeInfo: 0x0000000144EE6AD0
#include "../Core/DataContainer.h"
#include "../Entity/SubWorldInclusionCriterion.h"
#include "../Global/CString.h"

#pragma pack(push, 8)
namespace Entity {
    class SubWorldInclusionSetting : public Core::DataContainer {
        Entity::SubWorldInclusionCriterion Criterion; // 0x18
        Array<CString> EnabledOptions; // 0x20
    }; // 0x28
    static_assert(sizeof(SubWorldInclusionSetting) == 0x28);
}
#pragma pack(pop)