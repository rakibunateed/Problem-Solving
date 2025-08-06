# Jarvis AI with Slow TTS

## Overview

This project implements a voice-controlled AI assistant named **Jarvis**, which utilizes Google Cloud's **Gemini AI** for intelligent responses and **pyttsx3** for speech synthesis with customizable voice tones. The assistant can recognize voice commands, browse the internet, play music, and provide real-time information.

## Features

- **Voice Command Recognition**: Uses `speech_recognition` to capture user input.
- **AI Responses**: Integrates **Google Cloud AI (Gemini AI)** for intelligent responses.
- **Speech Output**: Uses `pyttsx3` for text-to-speech with adjustable voice tone.
- **Web Browsing**: Opens predefined websites like YouTube, Wikipedia, and Google.
- **Music Playback**: Plays local music files upon command.
- **Time & Date Retrieval**: Announces the current time and date.
- **Application Launching**: Opens specified applications on your computer.

## Installation

1. Clone this repository:
   ```sh
   git clone https://github.com/shafayetnuralam/Jarvis-AI.git
   cd Jarvis-AI
   ```
2. Install dependencies:
   ```sh
   pip install -r requirements.txt
   ```
3. Set up Google Cloud AI:
   - Ensure you have a valid **Google Cloud API Key** configured in `config.py`.
   - Replace `your_project_id`, `your_location`, and `your_endpoint_id` with your actual values in the code.

## Usage

1. Run the script:
   ```sh
   python jarvis.py
   ```
2. Speak a command when prompted.
3. Jarvis will process and respond accordingly.

## Customization

- **Changing Voice & Speed**: Modify `say()` function in `jarvis.py`:
  ```python
  engine.setProperty('voice', voices[1].id)  # Change index for different voices
  engine.setProperty('rate', 150)  # Adjust speed
  engine.setProperty('volume', 0.9)  # Adjust volume
  ```
- **Adding More Commands**: Modify the `while` loop in `jarvis.py` to handle new phrases.

## Requirements

- Python 3.7+
- `numpy`
- `speech_recognition`
- `pyttsx3`
- `google-cloud-aiplatform`

## License

This project is open-source and available under the MIT License.

## Author

Developed by **Shafayet Nur Alam**.
