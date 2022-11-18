// Object: SoundScopeData
// ClassId: 4670
// RuntimeId: 38080
// TypeInfo: 0x0000000144E01A70
#include "../Core/DataContainer.h"
#include "../Global/CString.h"
#include "../Audio/SoundScopeStrategyData.h"

#pragma pack(push, 8)
namespace Audio {
    class SoundScopeData : public Core::DataContainer {
        CString Name; // 0x18
        Audio::SoundScopeStrategyData DefaultStrategy; // 0x20
    }; // 0x28
    static_assert(sizeof(SoundScopeData) == 0x28);
}
#pragma pack(pop)