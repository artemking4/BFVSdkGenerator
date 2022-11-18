// Object: SoundDataPolicy
// ClassId: 4667
// RuntimeId: 38124
// TypeInfo: 0x0000000144E15940
#include "../Core/DataContainer.h"
#include "../Global/CString.h"
#include "../Audio/SoundDataRequestBehavior.h"
#include "../Audio/SoundDataReleaseBehavior.h"
#include "../Audio/SoundDataReadTarget.h"

#pragma pack(push, 8)
namespace Audio {
    class SoundDataPolicy : public Core::DataContainer {
        CString Name; // 0x18
        Audio::SoundDataRequestBehavior RequestBehavior; // 0x20
        Audio::SoundDataReleaseBehavior ReleaseBehavior; // 0x24
        Audio::SoundDataReadTarget PrimeTarget; // 0x28
        Audio::SoundDataReadTarget RequestTarget; // 0x2C
    }; // 0x30
    static_assert(sizeof(SoundDataPolicy) == 0x30);
}
#pragma pack(pop)