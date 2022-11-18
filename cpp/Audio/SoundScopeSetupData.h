// Object: SoundScopeSetupData
// ClassId: 4671
// RuntimeId: 32357
// TypeInfo: 0x0000000144E01870
#include "../Core/DataContainer.h"
#include "../Global/CString.h"
#include "../Audio/SoundScopeStrategyMapping.h"

#pragma pack(push, 8)
namespace Audio {
    class SoundScopeSetupData : public Core::DataContainer {
        CString Name; // 0x18
        Array<Audio::SoundScopeStrategyMapping> Mappings; // 0x20
    }; // 0x28
    static_assert(sizeof(SoundScopeSetupData) == 0x28);
}
#pragma pack(pop)