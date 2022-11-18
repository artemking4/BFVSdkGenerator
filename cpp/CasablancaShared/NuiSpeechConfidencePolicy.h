// Object: NuiSpeechConfidencePolicy
// ClassId: 4361
// RuntimeId: 34797
// TypeInfo: 0x0000000144D292A0
#include "../Core/DataContainer.h"
#include "../Global/Float32.h"

#pragma pack(push, 8)
namespace CasablancaShared {
    class NuiSpeechConfidencePolicy : public Core::DataContainer {
        Float32 MinimumConfidence; // 0x18
        Float32 SingleWordConfidence; // 0x1C
    }; // 0x20
    static_assert(sizeof(NuiSpeechConfidencePolicy) == 0x20);
}
#pragma pack(pop)