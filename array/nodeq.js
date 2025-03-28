const PDFDocument = require('pdfkit');
const fs = require('fs');
const printer = require('printer');

// Create a PDF document
const doc = new PDFDocument();

// Output file path
const pdfPath = 'file:///C:/Users/danis/Downloads/Campus_Recruitment_Exam_Syllabus[1].pdf';

// Pipe the document to a file
doc.pipe(fs.createWriteStream(pdfPath));

// Add text and other content
doc.fontSize(25).text('Hello, this is a test PDF!', 100, 100);

// Finalize the document
doc.end();

doc.on('end', () => {
    console.log('PDF created successfully:', pdfPath);
    
    // Print the PDF
    setTimeout(() => {
        printer.printFile({
            filename: pdfPath,
            printer: printer.getDefaultPrinterName(),
            success: (jobID) => console.log(`Printing started. Job ID: ${jobID}`),
            error: (err) => console.error('Print error:', err),
        });
    }, 2000); // Delay to ensure file is fully written
});
