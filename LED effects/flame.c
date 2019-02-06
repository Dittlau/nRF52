#include "flame.h"

void flame_setup(void)
{
    nrf_gpio_cfg_output(YELLOW1);
    nrf_gpio_cfg_output(YELLOW2);
    nrf_gpio_cfg_output(RED1);

    

//    static nrf_pwm_sequence_t const seq =
//    {
//        .values.p_individual = &seq_values,
//        .length              = NRF_PWM_VALUES_LENGTH(seq_values),
//        .repeats             = 0,
//        .end_delay           = 0
//    };
//
//    uint32_t err_code;
//    nrf_drv_pwm_config_t const config0 =
//    {
//        .output_pins =
//        {
//            YELLOW1,// channel 0
//            YELLOW2, // channel 1
//            RED1, // channel 2
//            NRF_DRV_PWM_PIN_NOT_USED  // channel 3
//        },
//        .irq_priority = APP_IRQ_PRIORITY_LOWEST,
//        .base_clock   = NRF_PWM_CLK_4MHz,
//        .count_mode   = NRF_PWM_MODE_UP,
//        .top_value    = m_top,
//        .load_mode    = NRF_PWM_LOAD_INDIVIDUAL,
//        .step_mode    = NRF_PWM_STEP_AUTO
//    };
//    err_code = nrf_drv_pwm_init(&m_pwm0, &config0, NULL);
//    APP_ERROR_CHECK(err_code);
    // m_used |= USED_PWM(0);

        // This array cannot be allocated on stack (hence "static") and it must
    // be in RAM (hence no "const", though its content is not changed).
}

void update_pwm(int16_t dutyR, int16_t dutyG, int16_t dutyB)
{
    
//    seq_values.channel_0 = m_top-dutyR;
//    seq_values.channel_1 = m_top-dutyG;
//    seq_values.channel_2 = m_top-dutyB;
//    
//
//    //seq_values = duty_cycle;
//
//    //nrf_drv_pwm_simple_playback(&m_pwm0, &m_seq, 1, 0);
//    //nrf_drv_pwm_simple_playback(&m_pwm0, &seq, 1, NRF_DRV_PWM_FLAG_LOOP);
//    nrf_drv_pwm_simple_playback(&m_pwm0, &seq, 1,  NRF_DRV_PWM_FLAG_LOOP);
}