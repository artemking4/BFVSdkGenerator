// Object: NuiSpeechConfidenceDialectPolicy
// ClassId: 4356
// RuntimeId: 500
// TypeInfo: 0x0000000144D29520
#include "../Core/DataContainer.h"
#include "../CasablancaShared/Dialect.h"
#include "../CasablancaShared/NuiSpeechConfidencePolicy.h"

#pragma pack(push, 8)
namespace CasablancaShared {
    class NuiSpeechConfidenceDialectPolicy : public Core::DataContainer {
        CasablancaShared::Dialect Dialect; // 0x18
        char pad_0x1C[0x4];
        CasablancaShared::NuiSpeechConfidencePolicy Policy; // 0x20
    }; // 0x28
    static_assert(sizeof(NuiSpeechConfidenceDialectPolicy) == 0x28);
}
#pragma pack(pop)