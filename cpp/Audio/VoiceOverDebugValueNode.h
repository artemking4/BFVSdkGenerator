// Object: VoiceOverDebugValueNode
// ClassId: 5602
// RuntimeId: 12680
// TypeInfo: 0x0000000144E1BF40
#include "../Audio/VoiceOverExpressionNode.h"
#include "../Audio/VoiceOverValueConnection.h"
#include "../Audio/VoiceOverValue.h"
#include "../Global/CString.h"
#include "../Global/Boolean.h"
#include "../Global/Float32.h"
#include "../Core/Vec3.h"

#pragma pack(push, 16)
namespace Audio {
    class VoiceOverDebugValueNode : public Audio::VoiceOverExpressionNode {
        Audio::VoiceOverValueConnection In; // 0x18
        char pad_0x28[0x8];
        Core::Vec3 Color; // 0x30
        Audio::VoiceOverValue Out; // 0x40
        CString ValueName; // 0x48
        Float32 Min; // 0x50
        Float32 Max; // 0x54
        Float32 DisplayTime; // 0x58
        Boolean Plot; // 0x5C
        Boolean Enabled; // 0x5D
        char pad_0x5E[0x2];
    }; // 0x60
    static_assert(sizeof(VoiceOverDebugValueNode) == 0x60);
}
#pragma pack(pop)