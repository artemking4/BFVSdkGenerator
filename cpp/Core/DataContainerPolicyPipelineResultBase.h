// Object: DataContainerPolicyPipelineResultBase
// ClassId: 4586
// RuntimeId: 46402
// TypeInfo: 0x0000000144BE8870
#include "../Core/SetDataResultListener.h"
#include "../Core/DataContainer.h"

#pragma pack(push, 8)
namespace Core {
    class DataContainerPolicyPipelineResultBase : public Core::SetDataResultListener {
        Core::DataContainer SecondaryResult; // 0x18
    }; // 0x20
    static_assert(sizeof(DataContainerPolicyPipelineResultBase) == 0x20);
}
#pragma pack(pop)