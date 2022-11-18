// Object: VoiceOverLabelArray
// ClassId: 5590
// RuntimeId: 18585
// TypeInfo: 0x0000000144E1A840
#include "../Core/DataContainer.h"
#include "../Global/CString.h"
#include "../Audio/VoiceOverLabelValue.h"

#pragma pack(push, 8)
namespace Audio {
    class VoiceOverLabelArray : public Core::DataContainer {
        CString Name; // 0x18
        Array<Audio::VoiceOverLabelValue> LabelValues; // 0x20
    }; // 0x28
    static_assert(sizeof(VoiceOverLabelArray) == 0x28);
}
#pragma pack(pop)