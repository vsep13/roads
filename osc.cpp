#include "userosc.h"

#define WAVE_SIZE 256
#define NUM_WAVES1 1
#define NUM_WAVES2 1

const float waves1[NUM_WAVES1][WAVE_SIZE] = {
  { 0.000000f, 0.050306f, 0.100172f, 0.149170f, 0.196887f, 0.242938f, 0.286970f, 0.328671f, 0.367778f, 0.404075f, 0.437401f, 0.467653f, 0.494780f, 0.518790f, 0.539740f, 0.557737f, 0.572932f, 0.585513f, 0.595700f, 0.603735f, 0.609878f, 0.614396f, 0.617555f, 0.619614f, 0.620818f, 0.621389f, 0.621524f, 0.621388f, 0.621110f, 0.620786f, 0.620470f, 0.620182f, 0.619904f, 0.619587f, 0.619153f, 0.618500f, 0.617508f, 0.616044f, 0.613971f, 0.611153f, 0.607461f, 0.602781f, 0.597020f, 0.590110f, 0.582013f, 0.572724f, 0.562274f, 0.550730f, 0.538197f, 0.524812f, 0.510747f, 0.496201f, 0.481397f, 0.466575f, 0.451989f, 0.437894f, 0.424544f, 0.412183f, 0.401036f, 0.391303f, 0.383155f, 0.376725f, 0.372102f, 0.369335f, 0.368421f, 0.369310f, 0.371904f, 0.376056f, 0.381577f, 0.388237f, 0.395773f, 0.403891f, 0.412279f, 0.420610f, 0.428552f, 0.435779f, 0.441973f, 0.446841f, 0.450115f, 0.451563f, 0.450994f, 0.448263f, 0.443277f, 0.435992f, 0.426421f, 0.414628f, 0.400731f, 0.384893f, 0.367323f, 0.348270f, 0.328011f, 0.306852f, 0.285111f, 0.263118f, 0.241200f, 0.219677f, 0.198851f, 0.179001f, 0.160373f, 0.143178f, 0.127583f, 0.113712f, 0.101639f, 0.091393f, 0.082951f, 0.076248f, 0.071173f, 0.067580f, 0.065285f, 0.064081f, 0.063740f, 0.064021f, 0.064676f, 0.065463f, 0.066146f, 0.066508f, 0.066355f, 0.065521f, 0.063872f, 0.061312f, 0.057783f, 0.053266f, 0.047782f, 0.041389f, 0.034179f, 0.026277f, 0.017830f, 0.009010f, 0.000000f, -0.009010f, -0.017830f, -0.026277f, -0.034179f, -0.041389f, -0.047782f, -0.053266f, -0.057783f, -0.061312f, -0.063872f, -0.065521f, -0.066355f, -0.066508f, -0.066146f, -0.065463f, -0.064676f, -0.064021f, -0.063740f, -0.064081f, -0.065285f, -0.067580f, -0.071173f, -0.076248f, -0.082951f, -0.091393f, -0.101639f, -0.113712f, -0.127583f, -0.143178f, -0.160373f, -0.179001f, -0.198851f, -0.219677f, -0.241200f, -0.263118f, -0.285111f, -0.306852f, -0.328011f, -0.348270f, -0.367323f, -0.384893f, -0.400731f, -0.414628f, -0.426421f, -0.435992f, -0.443277f, -0.448263f, -0.450994f, -0.451563f, -0.450115f, -0.446841f, -0.441973f, -0.435779f, -0.428552f, -0.420610f, -0.412279f, -0.403891f, -0.395773f, -0.388237f, -0.381577f, -0.376056f, -0.371904f, -0.369310f, -0.368421f, -0.369335f, -0.372102f, -0.376725f, -0.383155f, -0.391303f, -0.401036f, -0.412183f, -0.424544f, -0.437894f, -0.451989f, -0.466575f, -0.481397f, -0.496201f, -0.510747f, -0.524812f, -0.538197f, -0.550730f, -0.562274f, -0.572724f, -0.582013f, -0.590110f, -0.597020f, -0.602781f, -0.607461f, -0.611153f, -0.613971f, -0.616044f, -0.617508f, -0.618500f, -0.619153f, -0.619587f, -0.619904f, -0.620182f, -0.620470f, -0.620786f, -0.621110f, -0.621388f, -0.621524f, -0.621389f, -0.620818f, -0.619614f, -0.617555f, -0.614396f, -0.609878f, -0.603735f, -0.595700f, -0.585513f, -0.572932f, -0.557737f, -0.539740f, -0.518790f, -0.494780f, -0.467653f, -0.437401f, -0.404075f, -0.367778f, -0.328671f, -0.286970f, -0.242938f, -0.196887f, -0.149170f, -0.100172f, -0.050306f }
};

const float waves2[NUM_WAVES2][WAVE_SIZE] = {
  { 1.000000f, 0.992188f, 0.984375f, 0.976563f, 0.968750f, 0.960938f, 0.953125f, 0.945313f, 0.937500f, 0.929688f, 0.921875f, 0.914063f, 0.906250f, 0.898438f, 0.890625f, 0.882813f, 0.875000f, 0.867188f, 0.859375f, 0.851563f, 0.843750f, 0.835938f, 0.828125f, 0.820313f, 0.812500f, 0.804688f, 0.796875f, 0.789063f, 0.781250f, 0.773438f, 0.765625f, 0.757813f, 0.750000f, 0.742188f, 0.734375f, 0.726563f, 0.718750f, 0.710938f, 0.703125f, 0.695313f, 0.687500f, 0.679688f, 0.671875f, 0.664063f, 0.656250f, 0.648438f, 0.640625f, 0.632813f, 0.625000f, 0.617188f, 0.609375f, 0.601563f, 0.593750f, 0.585938f, 0.578125f, 0.570313f, 0.562500f, 0.554688f, 0.546875f, 0.539063f, 0.531250f, 0.523438f, 0.515625f, 0.507813f, 0.500000f, 0.492188f, 0.484375f, 0.476563f, 0.468750f, 0.460938f, 0.453125f, 0.445313f, 0.437500f, 0.429688f, 0.421875f, 0.414063f, 0.406250f, 0.398438f, 0.390625f, 0.382813f, 0.375000f, 0.367188f, 0.359375f, 0.351563f, 0.343750f, 0.335938f, 0.328125f, 0.320313f, 0.312500f, 0.304688f, 0.296875f, 0.289063f, 0.281250f, 0.273438f, 0.265625f, 0.257813f, 0.250000f, 0.242188f, 0.234375f, 0.226563f, 0.218750f, 0.210938f, 0.203125f, 0.195313f, 0.187500f, 0.179688f, 0.171875f, 0.164063f, 0.156250f, 0.148438f, 0.140625f, 0.132813f, 0.125000f, 0.117188f, 0.109375f, 0.101563f, 0.093750f, 0.085938f, 0.078125f, 0.070313f, 0.062500f, 0.054688f, 0.046875f, 0.039063f, 0.031250f, 0.023438f, 0.015625f, 0.007813f, 0.000000f, -0.007813f, -0.015625f, -0.023438f, -0.031250f, -0.039063f, -0.046875f, -0.054688f, -0.062500f, -0.070313f, -0.078125f, -0.085938f, -0.093750f, -0.101563f, -0.109375f, -0.117188f, -0.125000f, -0.132813f, -0.140625f, -0.148438f, -0.156250f, -0.164063f, -0.171875f, -0.179688f, -0.187500f, -0.195313f, -0.203125f, -0.210938f, -0.218750f, -0.226563f, -0.234375f, -0.242188f, -0.250000f, -0.257813f, -0.265625f, -0.273438f, -0.281250f, -0.289063f, -0.296875f, -0.304688f, -0.312500f, -0.320313f, -0.328125f, -0.335938f, -0.343750f, -0.351563f, -0.359375f, -0.367188f, -0.375000f, -0.382813f, -0.390625f, -0.398438f, -0.406250f, -0.414063f, -0.421875f, -0.429688f, -0.437500f, -0.445313f, -0.453125f, -0.460938f, -0.468750f, -0.476563f, -0.484375f, -0.492188f, -0.500000f, -0.507813f, -0.515625f, -0.523438f, -0.531250f, -0.539063f, -0.546875f, -0.554688f, -0.562500f, -0.570313f, -0.578125f, -0.585938f, -0.593750f, -0.601563f, -0.609375f, -0.617188f, -0.625000f, -0.632813f, -0.640625f, -0.648438f, -0.656250f, -0.664063f, -0.671875f, -0.679688f, -0.687500f, -0.695313f, -0.703125f, -0.710938f, -0.718750f, -0.726563f, -0.734375f, -0.742188f, -0.750000f, -0.757813f, -0.765625f, -0.773438f, -0.781250f, -0.789063f, -0.796875f, -0.804688f, -0.812500f, -0.820313f, -0.828125f, -0.835938f, -0.843750f, -0.851563f, -0.859375f, -0.867188f, -0.875000f, -0.882813f, -0.890625f, -0.898438f, -0.906250f, -0.914063f, -0.921875f, -0.929688f, -0.937500f, -0.945313f, -0.953125f, -0.960938f, -0.968750f, -0.976563f, -0.984375f, -0.992188f }
};

struct State {
  float phase;
  float phase2;
  float sub_phase;
  float uni_phases[6];
  uint32_t lfsr;
};

static State s_state;

// Hardware Menu Parameters
static uint16_t p_eff_depth = 100;
static uint16_t p_sub_type = 0;
static uint16_t p_detune = 50;
static uint16_t p_morph = 0;
static uint16_t p_keysync = 0;
static uint16_t p_bitdepth = 0;

inline float eval_wave1(float p, float wave_idx) {
  float p_idx = p * WAVE_SIZE;
  uint32_t i0 = (uint32_t)p_idx;
  uint32_t i1 = (i0 + 1) % WAVE_SIZE;
  float frac = p_idx - i0;

#if NUM_WAVES1 > 1
  if (p_morph == 1) {
    wave_idx = (float)((int)(wave_idx + 0.5f)); // Stepped morphing
  }
  uint32_t w0_idx = (uint32_t)wave_idx;
  uint32_t w1_idx = w0_idx + 1;
  if (w1_idx >= NUM_WAVES1) w1_idx = NUM_WAVES1 - 1;
  float w_frac = wave_idx - w0_idx;

  float val0 = waves1[w0_idx][i0] + frac * (waves1[w0_idx][i1] - waves1[w0_idx][i0]);
  float val1 = waves1[w1_idx][i0] + frac * (waves1[w1_idx][i1] - waves1[w1_idx][i0]);
  return val0 + w_frac * (val1 - val0);
#else
  return waves1[0][i0] + frac * (waves1[0][i1] - waves1[0][i0]);
#endif
}

inline float eval_wave2(float p, float wave_idx) {
  float p_idx = p * WAVE_SIZE;
  uint32_t i0 = (uint32_t)p_idx;
  uint32_t i1 = (i0 + 1) % WAVE_SIZE;
  float frac = p_idx - i0;

#if NUM_WAVES2 > 1
  if (p_morph == 1) {
    wave_idx = (float)((int)(wave_idx + 0.5f)); // Stepped morphing
  }
  uint32_t w0_idx = (uint32_t)wave_idx;
  uint32_t w1_idx = w0_idx + 1;
  if (w1_idx >= NUM_WAVES2) w1_idx = NUM_WAVES2 - 1;
  float w_frac = wave_idx - w0_idx;

  float val0 = waves2[w0_idx][i0] + frac * (waves2[w0_idx][i1] - waves2[w0_idx][i0]);
  float val1 = waves2[w1_idx][i0] + frac * (waves2[w1_idx][i1] - waves2[w1_idx][i0]);
  return val0 + w_frac * (val1 - val0);
#else
  return waves2[0][i0] + frac * (waves2[0][i1] - waves2[0][i0]);
#endif
}

void OSC_INIT(uint32_t platform, uint32_t api, const void *user_payload) {
  s_state.phase = 0.f;
  s_state.phase2 = 0.f;
  s_state.sub_phase = 0.f;
  for(int i=0; i<6; i++) s_state.uni_phases[i] = (float)i / 6.0f;
  s_state.lfsr = 0xACE1u;
}

void OSC_CYCLE(const user_osc_param_t * const params,
               int32_t *yn,
               const uint32_t frames) {
  float w0 = osc_w0f_for_note(params->pitch >> 8, params->pitch & 0xFF);
  float phase = s_state.phase;
  float phase2 = s_state.phase2;

  float shape = param_val_to_f32(params->shape_lfo);
  float shift_shape = param_val_to_f32(params->shift_shape_lfo);

  float eff_depth_f = p_eff_depth / 100.0f;
  float detune_f = p_detune / 100.0f;
  float bitdepth_f = p_bitdepth / 100.0f;

  q31_t * __restrict y = (q31_t *)yn;
  const q31_t * y_e = y + frames;

  for (; y != y_e; ) {
    float wave_idx = 0.0f;
#if NUM_WAVES1 > 1
    wave_idx = shape * (NUM_WAVES1 - 1);
#endif

    float val = eval_wave1(phase, wave_idx);


    // Detune (2 voices)
    float val2 = eval_wave1(s_state.phase2, wave_idx);
    val = val * (1.0f - shift_shape * 0.5f) + val2 * (shift_shape * 0.5f);


    // Wavefolder
    val = val * (1.0f + shape * 4.0f * eff_depth_f);
    if (val > 1.0f || val < -1.0f) {
      val = osc_softclipf(0.25f, val);
    }


    // Global Bit Depth Reduction
    if (bitdepth_f > 0.0f) {
      float res = 2.0f + (1.0f - bitdepth_f) * 126.0f;
      val = (int32_t)(val * res) / res;
    }

    *(y++) = f32_to_q31(val);

    phase += w0;
    phase -= (uint32_t)phase;
    
    // Detune phase
    phase2 += w0 * (1.0f + shift_shape * 0.05f * detune_f);
    phase2 -= (uint32_t)phase2;

    // Unison / Supersaw phases
    float d = shift_shape * 0.05f * detune_f;
    s_state.uni_phases[0] += w0 * (1.0f + d);
    s_state.uni_phases[1] += w0 * (1.0f - d);
    s_state.uni_phases[2] += w0 * (1.0f + d * 0.5f);
    s_state.uni_phases[3] += w0 * (1.0f - d * 0.5f);
    s_state.uni_phases[4] += w0 * (1.0f + d * 0.25f);
    s_state.uni_phases[5] += w0 * (1.0f - d * 0.25f);
    
    for(int i=0; i<6; i++) {
      s_state.uni_phases[i] -= (uint32_t)s_state.uni_phases[i];
    }

    // Sub phase (half speed for -1 octave)
    s_state.sub_phase += w0 * 0.5f;
    s_state.sub_phase -= (uint32_t)s_state.sub_phase;
  }

  s_state.phase = phase;
  s_state.phase2 = phase2;
}

void OSC_NOTEON(const user_osc_param_t * const params) {
  if (p_keysync == 1) {
    s_state.phase = 0.f;
    s_state.phase2 = 0.f;
    s_state.sub_phase = 0.f;
    for(int i=0; i<6; i++) s_state.uni_phases[i] = (float)i / 6.0f;
  }
}

void OSC_NOTEOFF(const user_osc_param_t * const params) { }

void OSC_PARAM(uint16_t index, uint16_t value) {
  switch (index) {
    case 0: p_eff_depth = value; break;
    case 1: p_sub_type = value; break;
    case 2: p_detune = value; break;
    case 3: p_morph = value; break;
    case 4: p_keysync = value; break;
    case 5: p_bitdepth = value; break;
  }
}
