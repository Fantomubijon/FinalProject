
function toggleMenu() {
  const menu = document.querySelector(".menu-links");
  const icon = document.querySelector(".hamburger-icon");
  menu.classList.toggle("open");
  icon.classList.toggle("open");
}

// Typing Effect
const words = [
  'Programmer',
  'Web and Mobile Student',
  'Bachelor of Science in Information Technology',
  'FEU TECH Student'
];

let wordIndex = 0;
let letterIndex = 0;
let typingTimeout;

function startTyping() {
  typingTimeout = setTimeout(typeLetter, 100);
}

function typeLetter() {
  const typingElement = document.getElementById('typing-effect');
  const currentWord = words[wordIndex];
  typingElement.textContent = currentWord.substring(0, letterIndex + 1);
  letterIndex++;

  if (letterIndex < currentWord.length) {
    typingTimeout = setTimeout(typeLetter, 100);
  } else {
    typingTimeout = setTimeout(removeText, 1500);
  }
}

function removeText() {
  const typingElement = document.getElementById('typing-effect');
  const currentWord = words[wordIndex];
  const currentLength = typingElement.textContent.length;

  if (currentLength > 0) {
    typingElement.textContent = currentWord.substring(0, currentLength - 1);
    typingTimeout = setTimeout(removeText, 50);
  } else {
    letterIndex = 0;
    wordIndex++;

    if (wordIndex === words.length) {
      wordIndex = 0;
    }

    startTyping();
  }
}

startTyping();

// JavaScript for form validation
window.onload = function () {
  // Add event listeners to text fields
  var textFields = document.querySelectorAll('input[type="text"], textarea');
  textFields.forEach(function (textField) {
    textField.addEventListener("input", function () {
      var errorId = textField.id + "-error";
      clearErrorMessage(errorId);
    });
  });
};

function validateForm() {
  var firstName = document.getElementById("first-name").value;
  var lastName = document.getElementById("last-name").value;
  var workEmail = document.getElementById("work-email").value;
  var companyName = document.getElementById("company-name").value;
  var country = document.getElementById("country").value;

  var requiredFields = [
    { field: firstName, errorId: "first-name-error", label: "First name" },
    { field: lastName, errorId: "last-name-error", label: "Last name" },
    { field: workEmail, errorId: "work-email-error", label: "Work email" },
    { field: companyName, errorId: "company-name-error", label: "Company name" },
    { field: country, errorId: "country-error", label: "Country or region" }
  ];

  // Reset error messages
  clearErrorMessages();

  var isValid = true;

  // Check each required field
  for (var i = 0; i < requiredFields.length; i++) {
    var fieldObj = requiredFields[i];
    if (!fieldObj.field) {
      displayErrorMessage(fieldObj.errorId, fieldObj.label + " is required.");
      isValid = false;
    }
  }

  return isValid;
}

// Clear error messages
function clearErrorMessages() {
  var errorMessages = document.getElementsByClassName("error-message");
  for (var i = 0; i < errorMessages.length; i++) {
    errorMessages[i].innerHTML = "";
  }
}

// Clear error message
function clearErrorMessage(errorId) {
  var errorElement = document.getElementById(errorId);
  if (errorElement) {
    errorElement.innerHTML = "";
  }
}

// Display error message
function displayErrorMessage(errorId, message) {
  var errorElement = document.getElementById(errorId);
  if (errorElement) {
    errorElement.innerHTML = message;
  }
}
