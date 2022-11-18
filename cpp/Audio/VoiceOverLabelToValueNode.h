// Object: VoiceOverLabelToValueNode
// ClassId: 5608
// RuntimeId: 8929
// TypeInfo: 0x0000000144E1A740
#include "../Audio/VoiceOverExpressionNode.h"
#include "../Audio/VoiceOverValueConnection.h"
#include "../Audio/VoiceOverValue.h"
#include "../Audio/VoiceOverLabelArray.h"
#include "../Audio/VoiceOverConstantValue.h"
#include "../Global/Boolean.h"

#pragma pack(push, 8)
namespace Audio {
    class VoiceOverLabelToValueNode : public Audio::VoiceOverExpressionNode {
        Audio::VoiceOverValueConnection Source; // 0x18
        Audio::VoiceOverValue Result; // 0x28
        Audio::VoiceOverLabelArray LabelArray; // 0x30
        Audio::VoiceOverConstantValue DefaultResult; // 0x38
        Boolean AssertWhenNoLabel; // 0x40
        Boolean AssertWhenSeveralLabels; // 0x41
        char pad_0x42[0x6];
    }; // 0x48
    static_assert(sizeof(VoiceOverLabelToValueNode) == 0x48);
}
#pragma pack(pop)