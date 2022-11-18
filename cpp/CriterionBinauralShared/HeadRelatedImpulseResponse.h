// Object: HeadRelatedImpulseResponse
// ClassId: 4094
// RuntimeId: 65511
// TypeInfo: 0x0000000144DA40C0
#include "../Core/DataContainer.h"
#include "../Core/Vec.h"

#pragma pack(push, 8)
namespace CriterionBinauralShared {
    class HeadRelatedImpulseResponse : public Core::DataContainer {
        Array<Core::Vec> FastConvolutionIRFile; // 0x18
        Array<Core::Vec> CoefficientsL; // 0x20
        Array<Core::Vec> CoefficientsR; // 0x28
    }; // 0x30
    static_assert(sizeof(HeadRelatedImpulseResponse) == 0x30);
}
#pragma pack(pop)