// Object: SubWorldInclusionCriterion
// ClassId: 4940
// RuntimeId: 43676
// TypeInfo: 0x0000000144EE6BD0
#include "../Core/DataContainer.h"
#include "../Global/CString.h"

#pragma pack(push, 8)
namespace Entity {
    class SubWorldInclusionCriterion : public Core::DataContainer {
        CString Name; // 0x18
        Array<CString> Options; // 0x20
    }; // 0x28
    static_assert(sizeof(SubWorldInclusionCriterion) == 0x28);
}
#pragma pack(pop)